using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;

public class PlayerConnectionObject : NetworkBehaviour
{
    public GameObject PlayerUnit11, PlayerUnit12;//ovo su prefabs za spawnovanje
    public GameObject PlayerUnit21, PlayerUnit22;
    public GameObject Figure11, Figure12, Figure21, Figure22; //ovo su gameobjecti koje smo stvroili
    public GameObject tableNetwork;
    public bool spawn11 = false, spawn12 = false;
    public bool spawn21 = false, spawn22 = false;

    public GameObject table;


    // Start is called before the first frame update
    void Start()
    {

        if (!isLocalPlayer)//not ours
        {
            return;
        }
        if (isServer)
        {
            this.name = "PlayerConnectionObject1";
            CmdSpawnTable();
        }
        else
        {
            this.name = "PlayerConnectionObject2";
            CmdJoined();
        }
        table = GameObject.Find("The Board Network(Clone)");
    }

    // Update is called once per frame
    void Update()
    {
        if (!isLocalPlayer)
        {
            return;
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            
        }
        if (Input.GetKeyDown(KeyCode.Q))
        {
            //sta god
        }
    }
    //-------------------------------------NOTIFY JOINED------------------------------------------
    [Command]
    public void CmdJoined()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().joined = true;
        RpcJoined();
    }

    [ClientRpc]
    void RpcJoined()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().joined = true;
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------CHANGE BUSY----------------------------------------

    public void changeBusy(int x, int y, bool t)
    {
        CmdChangeBusy(x, y, t);
    }

    [Command]
    void CmdChangeBusy(int x, int y, bool t)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().busy[x, y] = t;
        RpcChangeSpawn(x, y, t);
    }
    
    [ClientRpc]
    void RpcChangeSpawn(int x, int y, bool t)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().busy[x, y] = t;
    }
    //------------------------------------------------------------------------------------------

    //-------------------------------------CHANGE TURN------------------------------------------
    [Command]
    public void CmdChangeTurn()
    {
        bool temp = GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turn;
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turn = !temp;
        RpcChangeTurn(temp);
    }

    [ClientRpc]
    void RpcChangeTurn(bool temp)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turn = !temp;
    }
    //------------------------------------------------------------------------------------------

    //-------------------------------------CHANGE BUILD-----------------------------------------

    public void changeBuild(bool t)
    {
        CmdChangeBuild(t);
    }

    [Command]
    void CmdChangeBuild(bool t)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().build = t;
        RpcChangeBuild(t);
    }

    [ClientRpc]
    void RpcChangeBuild(bool t)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().build = t;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------CHANGE MOVED------------------------------------------
    [Command]
    public void CmdChangeMoved(string temp)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().moved = temp;
        RpcChangeMoved(temp);
    }

    [ClientRpc]
    void RpcChangeMoved(string temp)
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().moved = temp;
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------BUILD----------------------------------------------
    [Command]
    public void CmdBuild(int x, int y)
    {
        int height = ++GameObject.Find("Tile" + x + "" + y).GetComponent<TileButtonNetwork>().height;
        string tileName = "Tile" + x + "" + y + "/house/Level" + height;
        GameObject level = GameObject.Find(tileName);
        level.SetActive(true);
        level.layer = 0;
        level.transform.parent.gameObject.layer = 0;

        RpcBuild(x,y, height);
    }

    [ClientRpc]
    void RpcBuild(int x, int y, int height)
    {
        GameObject.Find("Tile" + x + "" + y).GetComponent<TileButtonNetwork>().height = height;
        string tileName = "Tile" + x + "" + y + "/house/Level" + height;
        GameObject level = GameObject.Find(tileName);
        level.SetActive(true);
        level.layer = 0;
        level.transform.parent.gameObject.layer = 0;
    }
    //------------------------------------------------------------------------------------------

    //-----------------------------------------WON----------------------------------------------
    [Command]
    public void CmdWon(int id)
    {
        string temp = "PLAYER " + id + " IS WINNER!";
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOffBoard();
        GameObject.Find("WinnerText").GetComponent<TextMeshProUGUI>().text = temp;
        GameObject.Find("CanvasWinner").GetComponent<Canvas>().enabled = true;
        GameObject.Find("Center").GetComponent<Settings>().toggleOutline(false);
        RpcWon(id);
    }

    [ClientRpc]
    void RpcWon(int id)
    {
        string temp = "PLAYER " + id + " IS WINNER!";
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOffBoard();
        GameObject.Find("WinnerText").GetComponent<TextMeshProUGUI>().text = temp;
        GameObject.Find("CanvasWinner").GetComponent<Canvas>().enabled = true;
        GameObject.Find("Center").GetComponent<Settings>().toggleOutline(false);
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------CHANGE P11-----------------------------------------
    public void changeP11()
    {
        CmdChangeP11();
    }

    [Command]
    void CmdChangeP11()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p11 = false;
        RpcChangeP11();
    }

    [ClientRpc]
    void RpcChangeP11()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p11 = false;
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------CHANGE P12-----------------------------------------
    public void changeP12()
    {
        CmdChangeP12();
    }

    [Command]
    void CmdChangeP12()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p12 = false;
        RpcChangeP12();
    }

    [ClientRpc]
    void RpcChangeP12()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p12 = false;
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------CHANGE P21-----------------------------------------
    public void changeP21()
    {
        CmdChangeP21();
    }

    [Command]
    void CmdChangeP21()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p21 = false;
        RpcChangeP21();
    }

    [ClientRpc]
    void RpcChangeP21()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p21 = false;
    }
    //------------------------------------------------------------------------------------------

    //---------------------------------------CHANGE P22-----------------------------------------
    public void changeP22()
    {
        CmdChangeP22();
    }

    [Command]
    void CmdChangeP22()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p22 = false;
        RpcChangeP22();
    }

    [ClientRpc]
    void RpcChangeP22()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().p22 = false;
    }
    //------------------------------------------------------------------------------------------

    //--------------------------------------SPAWN TABLE-----------------------------------------
    [Command]
    void CmdSpawnTable()
    {
        table = Instantiate(tableNetwork);
        NetworkServer.SpawnWithClientAuthority(table, connectionToClient);
    }
    //------------------------------------------------------------------------------------------


    //------------------------------------SPAWN FIGURE 11---------------------------------------
    [Command]
    public void CmdSpawnUnit11()
    {
        if (!hasAuthority) return;
        GameObject go = Instantiate(PlayerUnit11);
        Figure11 = go;
        spawn11 = false;
        NetworkServer.SpawnWithClientAuthority(Figure11, connectionToClient);
        RpcSpawnUnit11(go);
    }

    [ClientRpc]
    void RpcSpawnUnit11(GameObject go)
    {
        Figure11 = go;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------SPAWN FIGURE 12---------------------------------------
    [Command]
    public void CmdSpawnUnit12()
    {
        if (!hasAuthority) return;
        GameObject go = Instantiate(PlayerUnit12);
        Figure12 = go;
        spawn12 = false;
        NetworkServer.SpawnWithClientAuthority(Figure12, connectionToClient);
        RpcSpawnUnit12(go);
    }

    [ClientRpc]
    void RpcSpawnUnit12(GameObject go)
    {
        Figure12 = go;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------SPAWN FIGURE 21---------------------------------------
    [Command]
    public void CmdSpawnUnit21()
    {
        if (hasAuthority) return;
        GameObject go = Instantiate(PlayerUnit21);
        Figure21 = go;
        spawn21 = false;
        tableNetwork.GetComponent<TableNetwork>().busy[0,0] = true;
        NetworkServer.SpawnWithClientAuthority(Figure21, connectionToClient);
        RpcSpawnUnit21(go);
    }

    [ClientRpc]
    void RpcSpawnUnit21(GameObject go)
    {
        Figure21 = go;
        tableNetwork.GetComponent<TableNetwork>().busy[0, 0] = true;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------SPAWN FIGURE 22---------------------------------------
    [Command]
    public void CmdSpawnUnit22()
    {
        if (hasAuthority) return;
        GameObject go = Instantiate(PlayerUnit22);
        Figure22 = go;
        spawn22 = false;
        NetworkServer.SpawnWithClientAuthority(Figure22, connectionToClient);
        RpcSpawnUnit22(go);
    }

    [ClientRpc]
    void RpcSpawnUnit22(GameObject go)
    {
        Figure22 = go;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------MOVE FIGURE 11----------------------------------------
    public void move(string name, int x, float tmp, int y, float mov_y)
    {
        switch(name.Substring(name.Length - 2))//poslednja 2 slova od Player11
        {
            case "11":
                CmdMove11(x, tmp, y, mov_y);
                break;
            case "12":
                CmdMove12(x, tmp, y, mov_y);
                break;
            case "21":
                CmdMove21(x, tmp, y, mov_y);
                break;
            case "22":
                CmdMove22(x, tmp, y, mov_y);
                break;
            default: 
                Debug.Log("ERROR");
                break;
        }
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------MOVE FIGURE 11----------------------------------------
    [Command]
    public void CmdMove11(int x, float z, int y, float mov_y)
    {
        if (!hasAuthority) return;
        Figure11.transform.position = new Vector3(x,z, mov_y);
        Figure11.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure11.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
        RpcMove11(x,z,y, mov_y);
    }

    [ClientRpc]
    void RpcMove11(int x, float z, int y, float mov_y)
    {
        Figure11.transform.position = new Vector3(x, z, mov_y);//Nepotrebno?
        Figure11.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure11.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------MOVE FIGURE 12----------------------------------------
    [Command]
    public void CmdMove12(int x, float z, int y, float mov_y)
    {
        if (!hasAuthority) return;
        Figure12.transform.position = new Vector3(x, z, mov_y);
        Figure12.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure12.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
        RpcMove12(x,z,y, mov_y);
    }

    [ClientRpc]
    void RpcMove12(int x, float z, int y, float mov_y)
    {
        Figure12.transform.position = new Vector3(x, z, mov_y);//Nepotrebno?
        Figure12.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure12.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------MOVE FIGURE 21----------------------------------------
    [Command]
    public void CmdMove21(int x, float z, int y, float mov_y)
    {
        if (hasAuthority) return;
        Figure21.transform.position = new Vector3(x, z, mov_y);
        Figure21.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure21.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
        RpcMove21(x,z,y, mov_y);
    }

    [ClientRpc]
    void RpcMove21(int x, float z, int y, float mov_y)
    {
        Figure21.transform.position = new Vector3(x, z, mov_y);//Nepotrebno?
        Figure21.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure21.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
    }
    //------------------------------------------------------------------------------------------

    //------------------------------------MOVE FIGURE 22----------------------------------------
    [Command]
    public void CmdMove22(int x, float z, int y, float mov_y)
    {
        if (hasAuthority) return;
        Figure22.transform.position = new Vector3(x, z, mov_y);
        Figure22.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure22.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
        RpcMove22(x,z,y, mov_y);
    }

    [ClientRpc]
    void RpcMove22(int x, float z, int y, float mov_y)
    {
        Figure22.transform.position = new Vector3(x, z, mov_y);//Nepotrebno?
        Figure22.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().x = x;
        Figure22.transform.GetChild(0).gameObject.GetComponent<PlayerUnit>().y = y;
    }
    //------------------------------------------------------------------------------------------

    //-------------------------------------CHANGE START-----------------------------------------
    [Command]
    public void CmdStartPlaying()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().start = true;
        RpcStartPlaying();
    }

    [ClientRpc]
    void RpcStartPlaying()
    {
        GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().start = true;
    }
    //------------------------------------------------------------------------------------------
}
