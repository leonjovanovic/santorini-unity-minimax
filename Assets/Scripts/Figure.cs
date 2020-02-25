using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Figure : MonoBehaviour
{
    private Table table;

    // Start is called before the first frame update
    void Start()
    {
        if (LevelLoader.mode == 4) return;
        table = GameObject.Find("The Board").GetComponent<Table>();
    }

    // Update is called once per frame
    void Update() //proveravamo pobedu
    {
        if (gameObject.name == "Player11" && gameObject.transform.position.x != -1)
            if (!is_movable() && !table.player12.GetComponent<Figure>().is_movable())
            {
                table.PlayerAI[0] = null; table.PlayerAI[1] = null;
                table.won(2);
            }

        if (gameObject.name == "Player21" && gameObject.transform.position.x != -1)
            if (!is_movable() && !table.player22.GetComponent<Figure>().is_movable())
            {
                table.PlayerAI[0] = null; table.PlayerAI[1] = null;
                table.won(1);
            }
    }
    
    void OnMouseOver() //highlight hover
    {
        Material[] matArray = gameObject.GetComponent<Renderer>().materials;
        matArray[1] = table.highlightHover;
        gameObject.GetComponent<Renderer>().materials = matArray;
    }

    void OnMouseExit() //highlight hover
    {
        Material[] matArray = gameObject.GetComponent<Renderer>().materials;
        matArray[1] = null;
        gameObject.GetComponent<Renderer>().materials = matArray;
    }

    void OnMouseDown() //kada kliknemo figuricu
    {
        if (!table.build && table.turns(gameObject))
        {
            if (table.selected != "empty")
            {
                GameObject select = GameObject.Find(table.selected);
                table.erase_highlighted((int)select.transform.position.x, (int)select.transform.position.z);
            }
            table.selected = this.name;
            List<GameObject> temp = possible_moves();//lista Cube-ova
            if (temp == null) return;
            for (int i = 0; i < temp.Count; i++)
            {
                Material[] matArray = temp[i].GetComponent<Renderer>().materials;
                matArray[1] = table.highlight;
                temp[i].GetComponent<Renderer>().materials = matArray;
            }
        }
    }

    public List<GameObject> possible_moves()
    {
        int x = (int)gameObject.transform.position.x, y = (int)gameObject.transform.position.z;
        List<GameObject> ret = new List<GameObject>();
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++)
            {
                if (!table.field_exist(i, j))
                    continue;
                if (x == i && y == j)
                    continue;
                TileButton temp = GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<TileButton>();
                if (temp.possible_to_move(gameObject))
                {
                    ret.Add(temp.gameObject);//Dodajemo Cube
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;
    }
    
    public bool is_movable()
    {
        int fx = (int)gameObject.transform.position.x, fy = (int)gameObject.transform.position.z;
        for (int i = fx - 1; i <= fx + 1; i++)
            for (int j = fy - 1; j <= fy + 1; j++)
            {
                if (!table.field_exist(i, j))
                    continue;
                if (fx == i && fy == j)
                    continue;
                if (GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<TileButton>().possible_to_move(gameObject))
                    return true;
            }
        return false;
    }
}
