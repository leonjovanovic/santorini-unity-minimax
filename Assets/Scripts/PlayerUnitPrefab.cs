using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerUnitPrefab : NetworkBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    //-----------------------------------CHANGE SELECTED----------------------------------------
    [Command]
    public void CmdChangeSelected(string name)
    {
        GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().selected = name;
        RpcChangeSelected(name);
    }

    [ClientRpc]
    void RpcChangeSelected(string name)
    {
        GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().selected = name;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------HIGHLIGHT TILES----------------------------------------
    [Command]
    public void CmdHighlightTiles(string name)
    {
        GameObject temp = GameObject.Find("The Board(Clone)/"+name);
        Material[] matArray = temp.GetComponentInChildren<Renderer>().materials;
        matArray[1] = GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().highlight;
        temp.GetComponentInChildren<Renderer>().materials = matArray;
        RpcHighlightTiles(name);
    }

    [ClientRpc]
    void RpcHighlightTiles(string name)
    {
        GameObject temp = GameObject.Find("The Board(Clone)/" + name);
        Material[] matArray = temp.GetComponentInChildren<Renderer>().materials;
        matArray[1] = GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().highlight;
        temp.GetComponentInChildren<Renderer>().materials = matArray;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------ERASE HIGHLIGHT----------------------------------------
    [Command]
    public void CmdEraseHighlight(int x, int y)
    {
        int oldX = x, oldY = y;
        for (int i = oldX - 1; i <= oldX + 1; i++)
            for (int j = oldY - 1; j <= oldY + 1; j++)
            {
                if (!GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().field_exist(i, j))
                    continue;
                if (oldX == i && oldY == j)
                    continue;
                Renderer temp = GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<Renderer>();
                Material[] matArray = temp.materials;
                matArray[1] = null;
                temp.materials = matArray;
            }

        RpcEraseHighlight(x,y);
    }

    [ClientRpc]
    void RpcEraseHighlight(int x, int y)
    {
        int oldX = x, oldY = y;
        for (int i = oldX - 1; i <= oldX + 1; i++)
            for (int j = oldY - 1; j <= oldY + 1; j++)
            {
                if (!GameObject.Find("The Board(Clone)").GetComponent<TableNetwork>().field_exist(i, j))
                    continue;
                if (oldX == i && oldY == j)
                    continue;
                Renderer temp = GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").GetComponent<Renderer>();
                Material[] matArray = temp.materials;
                matArray[1] = null;
                temp.materials = matArray;
            }
    }
    //------------------------------------------------------------------------------------------
}
