using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using cakeslice;

public class Figure : MonoBehaviour
{
    private Table table;
    public int x, y, new_x, new_y;

    // Start is called before the first frame update
    void Start()
    {
        if (LevelLoader.mode == 4) return;
        table = GameObject.Find("The Board").GetComponent<Table>();
        gameObject.GetComponent<cakeslice.Outline>().enabled = false;//-------------------------------------------------------------------------------
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
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit hit;
            Debug.DrawRay(ray.origin, ray.direction * 100, Color.yellow, 100f);
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.collider != null)
                {
                    GameObject touchedObject = hit.transform.gameObject;
                    if(touchedObject.name == gameObject.name)
                    {
                        // Handle finger movements based on TouchPhase
                        switch (touch.phase)
                        {
                            case TouchPhase.Began:
                                gameObject.GetComponent<Outline>().enabled = true;//-----------------------------------------------------------------------------------
                                break;

                            case TouchPhase.Ended:
                                if (gameObject.name != table.selected) gameObject.GetComponent<Outline>().enabled = false;//-------------------------------------------------------------------------------------
                                break;
                        }
                    }
                }
            }
        }
    }

    /*void OnMouseOver() //highlight hover
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
    }*/

    void OnMouseDown() //kada kliknemo figuricu
    {
        gameObject.GetComponent<Outline>().enabled = true;//----------------------------------------------------------------------------------------
        if (!table.build && table.turns(gameObject) && table.start && !table.gameOver)
        {
            if (table.selected != "empty")
            {
                GameObject.Find(table.selected).GetComponent<Outline>().enabled = false;//----------------------------------------------------------
                Figure select = GameObject.Find(table.selected).GetComponent<Figure>();
                table.erase_highlighted(select.x, select.y);
            }
            table.selected = this.name;
            highlight_moves();
        }
    }

    public List<GameObject> possible_moves()
    {
        //int x = x, y = y;
        List<GameObject> ret = new List<GameObject>();
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++)
            {
                if (!table.field_exist(i, j))
                    continue;
                if (x == i && y == j)
                    continue;
                TileButton temp = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();
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
        int fx = x, fy = y;
        for (int i = fx - 1; i <= fx + 1; i++)
            for (int j = fy - 1; j <= fy + 1; j++)
            {
                if (!table.field_exist(i, j))
                    continue;
                if (fx == i && fy == j)
                    continue;
               /*if (GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<TileButton>().possible_to_move(gameObject))
                    return true;*/
                if (GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().possible_to_move(gameObject))
                    return true;
            }
        return false;
    }

    public void highlight_moves()
    {
        List<GameObject> temp = possible_moves();//lista Cube-ova
        int top_level = 0;
        if (temp != null)
        {
            for (int i = 0; i < temp.Count; i++)//For every tile
            {
                top_level = topLevel(temp[i]);
                if(top_level == 0)
                {
                    Material[] matArray = temp[i].GetComponent<Renderer>().materials;
                    matArray[1] = table.highlight_moves;
                    temp[i].GetComponent<Renderer>().materials = matArray;
                }
                else
                {
                    Material[] matArray = temp[i].transform.GetChild(0).transform.GetChild(top_level - 1).transform.GetChild(0).GetComponent<Renderer>().materials;//temp[i]=Tile => Tile/house/LevelX/LevelXTop
                    matArray[1] = table.highlight_moves;
                    temp[i].transform.GetChild(0).transform.GetChild(top_level - 1).transform.GetChild(0).GetComponent<Renderer>().materials = matArray;
                }

                
            }
        }
    }

    public int topLevel(GameObject go)
    {
        return go.GetComponent<TileButton>().height;
    }
}
