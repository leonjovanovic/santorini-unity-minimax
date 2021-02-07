using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;


public class TileButton : MonoBehaviour
{
    public Table table;
    public int x, y, height;
    public bool busy;


    // Start is called before the first frame update
    void Start()
    {
        table = GameObject.Find("The Board").GetComponent<Table>();
    }

    public void OnMouseDown()
    {
        if (table.start)
        {
            if (table.selected!="empty" && !busy && !table.build )
            {
                table.create_copy();
                GameObject tempObj = GameObject.Find(table.selected);
                if (!table.turns(tempObj) || !possible_to_move(tempObj)) return;
                unbusy_old(tempObj);
                table.erase_highlighted(tempObj.GetComponent<Figure>().x, tempObj.GetComponent<Figure>().y);
                if (height == 3)
                    if (table.turn) table.won(1);
                    else table.won(2);
                xyz_axis(this.height, tempObj); //pomeramo figuricu tempObj
                this.busy = true;
                table.build = true;
                table.moved = this.name;
                highlight_builds();
            }
            else if(!busy && table.build && height<4)
            {
                if (!possible_to_build()) return;
                Figure select = GameObject.Find(table.selected).GetComponent<Figure>();
                table.erase_highlighted(select.x, select.y);
                height++;
                string tileName = "Tile" + ((int)this.transform.position.x) + "" + ((int)this.transform.position.z)+"/house";
                GameObject level = GameObject.Find(tileName).transform.Find("Level" + height).gameObject;
                level.SetActive(true);
                level.layer = 0;
                level.gameObject.layer = 0;
                table.build = false;
                //table.print_state();
                table.turn = !table.turn; //OVDE MENJAMO TURN!!!!!!!!!!!!!!!!
                table.selected = "empty";
            }
            return;
        }

        set_up_figurines(); //Funkcija ce postaviti table.start na true
    }

    public void set_up_figurines()
    {
        GameObject figurica = null;
        //Debug.Log("USAO u set up figurines");
        if (table.p11)
        {
            table.create_copy();
            table.p11 = false;
            busy = true;
            GameObject.Find("Player11").GetComponent<Renderer>().enabled = true;
            Vector3 temp = new Vector3(x, 0, y);
            figurica = GameObject.Find("Player11");
            figurica.transform.position = temp;
            figurica.GetComponent<Figure>().x = x;
            figurica.GetComponent<Figure>().y = y;
            return;
        }
        if (table.p12)
        {
            table.create_copy();
            if (busy) return;
            table.p12 = false;
            busy = true;
            GameObject.Find("Player12").GetComponent<Renderer>().enabled = true;
            Vector3 temp = new Vector3(x, 0, y);
            figurica = GameObject.Find("Player12");
            figurica.transform.position = temp;
            figurica.GetComponent<Figure>().x = x;
            figurica.GetComponent<Figure>().y = y;
            table.turn = !table.turn;
            return;
        }
        if (table.p21)
        {
            if (LevelLoader.mode == 1) table.create_copy();//pamti potez drugog igraca samo ako je pravi igrac a ne AI
            if (busy) return;
            table.p21 = false;
            busy = true;
            GameObject.Find("Player21").GetComponent<Renderer>().enabled = true;
            Vector3 temp = new Vector3(x, 0, y);
            figurica = GameObject.Find("Player21");
            figurica.transform.position = temp;
            figurica.GetComponent<Figure>().x = x;
            figurica.GetComponent<Figure>().y = y;
            return;
        }
        if (table.p22)
        {
            if (LevelLoader.mode == 1) table.create_copy();//pamti potez drugog igraca samo ako je pravi igrac a ne AI
            if (busy) return;
            table.p22 = false;
            busy = true;
            table.start = true;
            GameObject.Find("Player22").GetComponent<Renderer>().enabled = true;
            Vector3 temp = new Vector3(x, 0, y);
            figurica = GameObject.Find("Player22");
            figurica.transform.position = temp;
            figurica.GetComponent<Figure>().x = x;
            figurica.GetComponent<Figure>().y = y;
            table.turn = !table.turn;
            return;
        }
    }
    public Vector3 xyz_axis(int heights, GameObject figurica)//moram da prosledjujem height zbog undo-a
    {
        Vector3 tmp = new Vector3();
        switch (heights)
        {
            case 1:
                tmp.x = x;
                tmp.z = y - 0.066f;
                tmp.y = (float)0.692;
                break;
            case 2:
                tmp.x = x;
                tmp.z = y - 0.083f;
                tmp.y = (float)1.166;
                break;
            case 3:
                tmp.x = x;
                tmp.z = y - 0.113f;
                tmp.y = (float)1.6;
                break;
            case 0:
                tmp.x = x;
                tmp.z = y;
                tmp.y = 0;
                break;
            case 4:
                tmp.x = x;
                tmp.z = y;
                tmp.y = 0;
                break;
        }
        figurica.transform.position = tmp;
        figurica.GetComponent<Figure>().x = x;
        figurica.GetComponent<Figure>().y = y;
        return tmp;
    }

    public bool possible_to_move(GameObject obj)//Prosledjujemo figuru da li moze da se pomeri na (this) polje
    {
        TileButton oldTile = GameObject.Find("Tile" + obj.GetComponent<Figure>().x + "" + obj.GetComponent<Figure>().y).GetComponent<TileButton>();
        int oldH = oldTile.height, oldX = oldTile.x, oldY = oldTile.y;
        if (height - oldH > 1 || busy || Math.Abs(oldX - x) > 1 || Math.Abs(oldY - y) > 1 || (oldX == x && oldY == y) || height == 4)
            return false;
        return true;
    }

    public void unbusy_old(GameObject obj)
    {
        //Removing figure from tile
        string tileName = "Tile" + ((int)obj.GetComponent<Figure>().x) + "" + ((int)obj.GetComponent<Figure>().y);
        TileButton temp = GameObject.Find(tileName).GetComponent<TileButton>();
        temp.busy = false;
    }

    public bool possible_to_build()
    {
        TileButton tile = GameObject.Find(table.moved).GetComponent<TileButton>();
        if (height == 4 || busy || Math.Abs(tile.x - x) > 1 || Math.Abs(tile.y - y) > 1 || (tile.x == x && tile.y == y))
            return false;
        return true;
    }

    public List<GameObject> possible_builds()
    {
        List<GameObject> ret = new List<GameObject>();
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++)
            {
                if (!table.field_exist(i, j))
                    continue;
                if (x == i && y == j)
                    continue;
                TileButton temp = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();
                if (temp.possible_to_build())
                {
                    ret.Add(temp.gameObject);//Dodajemo Cube
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;
    }

    public void highlight_builds()
    {
        int top_level = 0;
        List<GameObject> temp = possible_builds();//lista Cube-ova
        for (int i = 0; i < temp.Count; i++)
        {
            top_level = temp[i].GetComponent<TileButton>().height;
            if (top_level == 0)
            {
                Material[] matArray = temp[i].GetComponent<Renderer>().materials;
                matArray[1] = table.highlight_builds;
                temp[i].GetComponent<Renderer>().materials = matArray;
            }
            else
            {
                Material[] matArray = temp[i].transform.GetChild(0).transform.GetChild(top_level - 1).transform.GetChild(0).GetComponent<Renderer>().materials;
                matArray[1] = table.highlight_builds;
                temp[i].transform.GetChild(0).transform.GetChild(top_level - 1).transform.GetChild(0).GetComponent<Renderer>().materials = matArray;
            }
        }
    }
}
