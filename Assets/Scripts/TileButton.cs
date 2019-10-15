using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;


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
        Debug.Log(gameObject.name);
        if (table.start)
        {
            if (table.selected!="empty" && !busy && !table.build )
            {
                table.create_copy();
                GameObject tempObj = GameObject.Find(table.selected);
                if (!table.turns(tempObj) || !possible_to_move(tempObj)) return;
                unbusy_old(tempObj);
                table.erase_highlighted((int)tempObj.transform.position.x, (int)tempObj.transform.position.z);
                if (height == 3)
                    if (table.turn) table.won(1);
                    else table.won(2);
                float tmp = y_axis(this.height);
                Vector3 temp = new Vector3(x, tmp, y);
                tempObj.transform.position = temp; //tempObj je figurica
                this.busy = true;
                table.build = true;
                table.moved = this.transform.parent.name;
                highlight_builds();
            }
            else if(!busy && table.build && height<4)
            {
                if (!possible_to_build()) return;
                GameObject select = GameObject.Find(table.selected);
                table.erase_highlighted((int)select.transform.position.x, (int)select.transform.position.z);
                height++;
                string tileName = "Tile" + ((int)this.transform.position.x) + "" + ((int)this.transform.position.z) + "/Cube - Visual/Level" + height + "/Level" + height;
                GameObject level = GameObject.Find(tileName);
                level.GetComponent<Renderer>().enabled = true;
                level.layer = 0;
                level.transform.parent.gameObject.layer = 0;
                table.build = false;
                //table.print_state();//adads
                table.turn = !table.turn;
                table.selected = "empty";
            }
            return;
        }

        set_up_figurines(); //Funkcija ce postaviti table.start na true
    }

    public void set_up_figurines()
    {
        if (table.p11)
        {
            table.create_copy();
            table.p11 = false;
            busy = true;
            GameObject.Find("Player11").GetComponent<Renderer>().enabled = true;
            Vector3 temp = new Vector3(x, 0, y);
            GameObject.Find("Player11").transform.position = temp;
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
            GameObject.Find("Player12").transform.position = temp;
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
            GameObject.Find("Player21").transform.position = temp;
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
            GameObject.Find("Player22").transform.position = temp;
            table.turn = !table.turn;
            return;
        }
    }
    public float y_axis(int heights)//moram da prosledjujem height zbog undo-a
    {
        float tmp = 0;
        switch (heights)
        {
            case 1:
                tmp = (float)0.426;
                break;
            case 2:
                tmp = (float)0.863;
                break;
            case 3:
                tmp = (float)1.279;
                break;
            case 0:
                tmp = 0;
                break;
            case 4:
                tmp = 0;
                break;
        }
        return tmp;
    }

    public bool possible_to_move(GameObject obj)//Prosledjujemo figuru da li moze da se pomeri na (this) polje
    {
        TileButton oldTile = GameObject.Find("Tile"+obj.transform.position.x+""+obj.transform.position.z+ "/Cube - Visual").GetComponent<TileButton>();
        int oldH = oldTile.height, oldX = oldTile.x, oldY = oldTile.y;
        if (height - oldH > 1 || busy || Math.Abs(oldX - x) > 1 || Math.Abs(oldY - y) > 1 || (oldX == x && oldY == y) || height == 4)
            return false;
        return true;
    }

    public void unbusy_old(GameObject obj)
    {
        //Removing figure from tile
        string tileName = "Tile" + ((int)obj.transform.position.x) + "" + ((int)obj.transform.position.z) + "/Cube - Visual";
        TileButton temp = GameObject.Find(tileName).GetComponent<TileButton>();
        temp.busy = false;
    }

    public bool possible_to_build()
    {
        TileButton tile = GameObject.Find(table.moved + "/Cube - Visual").GetComponent<TileButton>();
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
                TileButton temp = GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<TileButton>();
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
        List<GameObject> temp = possible_builds();//lista Cube-ova
        for (int i = 0; i < temp.Count; i++)
        {
            Material[] matArray = temp[i].GetComponent<Renderer>().materials;
            matArray[1] = table.highlight;
            print(matArray[1].name);
            temp[i].GetComponent<Renderer>().materials = matArray;
        }
    }
}
