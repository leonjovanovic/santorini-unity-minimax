using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerUnit : MonoBehaviour
{

    public TableNetwork table;
    public PlayerUnitPrefab unitNetwork;
    private bool init_flag, server;
    public int x, y;

    // Start is called before the first frame update
    void Start()
    {
        init_flag = true;
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnMouseDown() //kada kliknemo figuricu
    {
        if (init_flag)
        {
            init();
        }

        if (!table.build && table.turns(this.name) && table.start)
        {
            if (server) //da bi samo jedan player mogao da kontrolise highlightovanje
            {
                if (!(server && table.turn)) return;
            }
            else if (!(!server && !table.turn)) return;

            if (table.selected != "empty")//ako je neki vec selektovan, prvo da izbrisemo njega
            {
                PlayerUnit select = GameObject.Find(table.selected).GetComponent<PlayerUnit>(); ;
                unitNetwork.CmdEraseHighlight(select.x, select.y);
            }  //a onda da highlajtujemo naseg
            unitNetwork.CmdChangeSelected(this.name);

            List<GameObject> temp = possible_moves();//lista Cube-ova

            if (temp == null) return;
            for (int i = 0; i < temp.Count; i++)
            {
                //Debug.Log(temp[i].name);
                unitNetwork.CmdHighlightTiles(temp[i].name);
            }
        }
    }

    private void init()
    {
        init_flag = false;
        if (GameObject.Find("PlayerConnectionObject1"))
        {
            server = true;
            unitNetwork = GameObject.Find("PlayerConnectionObject1").GetComponent<PlayerUnitPrefab>();
        }
        else
        {
            server = false;
            unitNetwork = GameObject.Find("PlayerConnectionObject2").GetComponent<PlayerUnitPrefab>();
        }
        table = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>();
    }

    public List<GameObject> possible_moves()
    {
        int x = (int)gameObject.transform.position.x, y = (int)gameObject.transform.position.z;
        List<GameObject> ret = new List<GameObject>();
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++)
            {
                if (!table.field_exist(i, j)) //ako uopste postoji
                    continue;
                if (x == i && y == j) //ako smo to mi
                    continue;
                TileButtonNetwork temp = GameObject.Find("The Board Network(Clone)/Tile" + i + "" + j ).GetComponent<TileButtonNetwork>();
                if (temp.possible_to_move(gameObject))
                {
                    //Debug.Log("X: " + i + "Y: " + j);
                    ret.Add(temp.gameObject);//Dodajemo Cube
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;
    }


}
