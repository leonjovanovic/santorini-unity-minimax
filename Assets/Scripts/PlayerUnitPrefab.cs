using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerUnitPrefab : NetworkBehaviour
{
    private bool mat_move = true, mat_build = true;
    public Material highlight_moves, highlight_builds;
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
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().selected = name;
        RpcChangeSelected(name);
    }

    [ClientRpc]
    void RpcChangeSelected(string name)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().selected = name;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------HIGHLIGHT MOVE TILES----------------------------------------
    [Command]
    public void CmdHighlightMoveTiles(string name,int height)
    {
        if (mat_move)
        {
            mat_move = false;
            highlight_moves = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().highlight_moves;
        }
        GameObject temp;

        if (height == 0) temp = GameObject.Find("The Board Network(Clone)/" + name);//Tile
        else temp = GameObject.Find("The Board Network(Clone)/" + name).transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).gameObject;//Level1/2/3
        
        Material[] matArray = temp.GetComponent<Renderer>().materials;
        matArray[1] = highlight_moves;
        temp.GetComponent<Renderer>().materials = matArray;
        RpcHighlightMoveTiles(name, height);
    }

    [ClientRpc]
    void RpcHighlightMoveTiles(string name, int height)
    {
        if (mat_move)
        {
            mat_move = false;
            highlight_moves = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().highlight_moves;
        }
        GameObject temp;
        if (height == 0) temp = GameObject.Find("The Board Network(Clone)/" + name);//Tile
        else temp = GameObject.Find("The Board Network(Clone)/" + name).transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).gameObject;//Level1/2/3

        Material[] matArray = temp.GetComponent<Renderer>().materials;
        matArray[1] = highlight_moves;
        temp.GetComponent<Renderer>().materials = matArray;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------HIGHLIGHT BUILD TILES----------------------------------------
    [Command]
    public void CmdHighlightBuildTiles(string name, int height)
    {
        if (mat_build)
        {
            mat_build = false;
            highlight_builds = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().highlight_builds;
        }
        GameObject temp;
        if (height == 0) temp = GameObject.Find("The Board Network(Clone)/" + name);
        else temp = GameObject.Find("The Board Network(Clone)/" + name).transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).gameObject;

        Material[] matArray = temp.GetComponent<Renderer>().materials;
        matArray[1] = highlight_builds;
        temp.GetComponent<Renderer>().materials = matArray;
        RpcHighlightBuildTiles(name, height);
    }

    [ClientRpc]
    void RpcHighlightBuildTiles(string name, int height)
    {
        if (mat_build)
        {
            mat_build = false;
            highlight_builds = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().highlight_builds;
        }
        GameObject temp;
        if (height == 0) temp = GameObject.Find("The Board Network(Clone)/" + name);
        else temp = GameObject.Find("The Board Network(Clone)/" + name).transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).gameObject;

        Material[] matArray = temp.GetComponent<Renderer>().materials;
        matArray[1] = highlight_builds;
        temp.GetComponent<Renderer>().materials = matArray;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------ERASE HIGHLIGHT----------------------------------------
    [Command]
    public void CmdEraseHighlight(int x, int y)
    {
        int height = 0;
        GameObject go = null;
        Renderer temp = null;
        int oldX = x, oldY = y;
        for (int i = oldX - 1; i <= oldX + 1; i++)
            for (int j = oldY - 1; j <= oldY + 1; j++)
            {
                if (!GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().field_exist(i, j))
                    continue;
                if (oldX == i && oldY == j)
                    continue;
                go = GameObject.Find("Tile" + i + "" + j);
                height = go.GetComponent<TileButtonNetwork>().height;
                if (height == 4) continue;
                if (height == 0) temp = go.GetComponent<Renderer>();
                else temp = go.transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).GetComponent<Renderer>();
                Material[] matArray = temp.materials;
                matArray[1] = null;
                temp.materials = matArray;
            }
        RpcEraseHighlight(x,y);
    }

    [ClientRpc]
    void RpcEraseHighlight(int x, int y)
    {
        int height = 0;
        GameObject go = null;
        Renderer temp = null;
        int oldX = x, oldY = y;
        for (int i = oldX - 1; i <= oldX + 1; i++)
            for (int j = oldY - 1; j <= oldY + 1; j++)
            {
                if (!GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().field_exist(i, j))
                    continue;
                if (oldX == i && oldY == j)
                    continue;
                go = GameObject.Find("Tile" + i + "" + j);
                height = go.GetComponent<TileButtonNetwork>().height;
                if (height == 4) continue;
                if (height == 0) temp = go.GetComponent<Renderer>();
                else temp = go.transform.GetChild(0).transform.GetChild(height - 1).transform.GetChild(0).GetComponent<Renderer>();
                Material[] matArray = temp.materials;
                matArray[1] = null;
                temp.materials = matArray;
            }
    }
    //------------------------------------------------------------------------------------------
}
