using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TileButtonNetwork : MonoBehaviour
{
    public TableNetwork table;
    public int x, y, height;
    public bool busy, isLocal, isServer;
    public PlayerConnectionObject curr_player;
    public PlayerUnitPrefab unitNetwork;
    private bool init_flag;
    public SoundManager soundManager;
    public DustParticleManger dustManager;
    // Start is called before the first frame update
    void Start()
    {
        init_flag = true;
        table = this.transform.parent.GetComponent<TableNetwork>();
        soundManager = GameObject.Find("Center").GetComponent<SoundManager>();
        dustManager = GameObject.Find("DustParticles").GetComponent<DustParticleManger>();
    }

    // Update is called once per frame
    void Update()
    {
        busy = table.busy[x, y];//obrisati na kraju!!!!!!!!!!!!!!!!!!!!!!
    }

    //Kad kliknemo na njega
    public IEnumerator OnMouseDown()
    {
        //Debug.Log(gameObject.name);

        if (LevelLoader.mode != 4 || !table.joined) yield break;
        if(init_flag)init();

        if (table.start)
        {
            if (!(GameObject.Find("PlayerConnectionObject1") && table.turn) && !(GameObject.Find("PlayerConnectionObject2") && !table.turn)) yield break;
            if (table.selected != "empty" && !busy && !table.build)
            {
                //----------------------------MOVE-----------------------------------
                GameObject tempObj = GameObject.Find(table.selected);
                if (!table.turns(tempObj.name) || !possible_to_move(tempObj)) yield break;
                curr_player.changeBusy(tempObj.GetComponent<PlayerUnit>().x, tempObj.GetComponent<PlayerUnit>().y, false);
                TileButtonNetwork temp = GameObject.Find("Tile" + tempObj.GetComponent<PlayerUnit>().x + "" + tempObj.GetComponent<PlayerUnit>().y).GetComponent<TileButtonNetwork>();

                yield return new WaitUntil(() => temp.busy == false);//Ovo mora da bi sacekali da server postavi na false jer cemo u highlight_build ispitivati to

                unitNetwork.CmdEraseHighlight(tempObj.GetComponent<PlayerUnit>().x, tempObj.GetComponent<PlayerUnit>().y);

                if (height == 3)
                    if (table.turn) curr_player.CmdWon(1);
                    else curr_player.CmdWon(2);
                float moving_z = z_axis(this.height);
                float moving_y = y_axis(this.height);

                curr_player.move(GameObject.Find(table.selected).name, x, moving_y, y, moving_z);

                curr_player.changeBusy(x, y, true);
                curr_player.changeBuild(true);
                curr_player.CmdChangeMoved(this.name);

                yield return new WaitUntil(() => table.moved == this.name);//Ovo mora da bi sacekali da server postavi moved jer cemo u highlight_build ispitivati to
                //dustManager.playDustMove(tempObj.transform.position.x, tempObj.transform.position.z, tempObj.transform.position.y);
                //soundManager.playAudioMove();
                highlight_builds();

                //-------------------------------------------------------------------
            } 
            else if (!busy && table.build && height < 4)
            {                
                if (!possible_to_build()) yield break;
                int old_height = height;
                GameObject tempObj = GameObject.Find(table.selected);
                unitNetwork.CmdEraseHighlight(tempObj.GetComponent<PlayerUnit>().x, tempObj.GetComponent<PlayerUnit>().y);
                curr_player.CmdBuild(x,y);

                curr_player.changeBuild(false);
                curr_player.CmdChangeTurn();
                unitNetwork.CmdChangeSelected("empty");

                //yield return new WaitUntil(() => height == old_height+1);
                //GameObject level = GameObject.Find("Tile" + ((int)this.transform.position.x) + "" + ((int)this.transform.position.z) + "/house/Level" + height);
                //playDropAnimation(level, height);
                //soundManager.playAudioBuild();
                //playDustBuild(height);
            }
            yield break;
        }

        set_up_figurines(); //Funkcija ce postaviti table.start na true
    }


    public void set_up_figurines()
    {
        if (GameObject.Find("PlayerConnectionObject1"))
        {
            isLocal = curr_player.isLocalPlayer;
            isServer = curr_player.isServer;
        }
        else
        {
            isLocal = curr_player.isLocalPlayer;
            isServer = curr_player.isServer;
        }

        if (!isLocal) return;
        if (table.p11 && isServer)
        {
            curr_player.changeP11();
            curr_player.changeBusy(x, y, true);
            curr_player.CmdSpawnUnit11();
            curr_player.CmdMove11(x, 0, y, y);
            //soundManager.playAudioMove();
            //dustManager.playDustMove(this.x, this.y, 0);
            return;
        }
        if (table.p12 && isServer)
        {
            if (table.busy[x, y]) return;
            curr_player.changeP12();
            curr_player.changeBusy(x, y, true);
            curr_player.CmdSpawnUnit12();
            curr_player.CmdMove12(x, 0, y, y);

            //soundManager.playAudioMove();
            //dustManager.playDustMove(this.x, this.y, 0);
            curr_player.CmdChangeTurn();
            return;
        }
        if (table.p21 && !isServer && !table.p12)
        {
            if (table.busy[x, y]) return;
            curr_player.changeP21();
            curr_player.changeBusy(x, y, true);
            curr_player.CmdSpawnUnit21();
            curr_player.CmdMove21(x, 0, y, y);
            //soundManager.playAudioMove();
            //dustManager.playDustMove(this.x, this.y, 0);
            return;
        }
        if (table.p22 && !isServer && !table.p12)
        {
            if (table.busy[x, y]) return;
            curr_player.changeP22();
            curr_player.changeBusy(x, y, true);
            curr_player.CmdSpawnUnit22();
            curr_player.CmdMove22(x, 0, y, y);

            //soundManager.playAudioMove();
            //dustManager.playDustMove(this.x, this.y, 0);
            curr_player.CmdChangeTurn();
            curr_player.CmdStartPlaying();
            return;
        }
    }
    private void init()
    {
        init_flag = false;
        if (GameObject.Find("PlayerConnectionObject1"))
        {
            curr_player = GameObject.Find("PlayerConnectionObject1").GetComponent<PlayerConnectionObject>();
            unitNetwork = GameObject.Find("PlayerConnectionObject1").GetComponent<PlayerUnitPrefab>();
        }
        else
        {
            curr_player = GameObject.Find("PlayerConnectionObject2").GetComponent<PlayerConnectionObject>();
            unitNetwork = GameObject.Find("PlayerConnectionObject2").GetComponent<PlayerUnitPrefab>();
        }
    }

    public bool possible_to_move(GameObject obj)//Prosledjujemo figuru da li moze da se pomeri na (this) polje
    {
        TileButtonNetwork oldTile = GameObject.Find("Tile" + obj.GetComponent<PlayerUnit>().x + "" + obj.GetComponent<PlayerUnit>().y).GetComponent<TileButtonNetwork>();
        int oldH = oldTile.height, oldX = oldTile.x, oldY = oldTile.y;
        if (height - oldH > 1 || busy || Mathf.Abs(oldX - x) > 1 || Mathf.Abs(oldY - y) > 1 || (oldX == x && oldY == y) || height == 4)
        {
            return false;
        }
        return true;
    }

    public float y_axis(int heights)//moram da prosledjujem height zbog undo-a
    {
        float tmp = 0;
        switch (heights)
        {
            case 1:
                tmp = (float)0.692;
                break;
            case 2:
                tmp = (float)1.166;
                break;
            case 3:
                tmp = (float)1.6;
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

    public float z_axis(int heights)//moram da prosledjujem height zbog undo-a
    {
        float tmp = 0;
        switch (heights)
        {
            case 1:
            case 2:
            case 3:
                tmp = y - 0.1f;
                break;
            case 0:
                tmp = y;
                break;
            case 4:
                tmp = y;
                break;
        }
        return tmp;
    }

    public void highlight_builds()
    {
        List<GameObject> temp = possible_builds();//lista Cube-ova
        for (int i = 0; i < temp.Count; i++)
        {
            unitNetwork.CmdHighlightBuildTiles(temp[i].name, temp[i].GetComponent<TileButtonNetwork>().height);
        }
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
                TileButtonNetwork temp = GameObject.Find("The Board Network(Clone)/Tile" + i + "" + j).GetComponent<TileButtonNetwork>();
                if (temp.possible_to_build())
                {
                    ret.Add(temp.gameObject);//Dodajemo Cube
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;
    }

    public bool possible_to_build()
    {
        TileButtonNetwork tile = GameObject.Find(table.moved).GetComponent<TileButtonNetwork>();

        //Debug.Log("2" + tile.name);

        if (height == 4 || busy || Mathf.Abs(tile.x - x) > 1 || Mathf.Abs(tile.y - y) > 1 || (tile.x == x && tile.y == y))
            return false;
        return true;
    }

    public void playDustBuild(int height)
    {
        switch (height)
        {
            case 1:
                dustManager.playDustBuild(x, y, 0, 0.3191362f, 0.204682f, 0.3191362f, false);
                break;
            case 2:
                dustManager.playDustBuild(x, y, 0.684f, 0.3191362f, 0.204682f, 0.3191362f, false);
                break;
            case 3:
                dustManager.playDustBuild(x, y - 0.116f, 1.1604f, 0.1646296f, 0.1055873f, 0.1646296f, false);
                break;
            case 4:
                dustManager.playDustBuild(x, y - 0.116f, 1.61f, 0.1260832f, 0.08086507f, 0.1260832f, false);
                break;
            default:
                Debug.LogError("Wrong height!");
                break;
        }

    }

    public void playDropAnimation(GameObject level, int height)
    {
        switch (height)
        {
            case 1:
                level.GetComponent<Animator>().Play("House.Level1Drop", 0, 0);
                break;
            case 2:
                level.GetComponent<Animator>().Play("House.Level2Drop", 0, 0);
                break;
            case 3:
                level.GetComponent<Animator>().Play("House.Level3Drop", 0, 0);
                break;
            case 4:
                level.GetComponent<Animator>().Play("House.Level4Drop", 0, 0);
                break;
            default:
                Debug.LogError("Wrong height2!");
                break;
        }
    }

    public void playDustMove(float x, float z, float y)
    {
        dustManager.playDustMove(x, z, y);
    }
}
