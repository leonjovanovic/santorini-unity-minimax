using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using cakeslice;

public class Table : MonoBehaviour
{
    public bool start, p11, p12, p21, p22, build, turn, gameOver;//turn=true je prvi igrac
    public string selected, moved;
    public Material highlight_moves, highlight_builds;//, highlightHover;
    public GameObject player11, player12, player21, player22;// da bi u Figure.Update() ne bi stalno trazili
    public AI[] PlayerAI;
    public int cnt;
    public long time, num;
    private bool outline_flag = true;

    public char[,] undo_state;
    public bool undo_start, undo_p11, undo_p12, undo_p21, undo_p22, undo_build, undo_turn;
    public string undo_selected;

    // Start is called before the first frame update
    void Start()
    {
        Application.targetFrameRate = 60;
        Screen.SetResolution(1920, 1080, true);


        this.start = false;
        this.p11 = this.p12 = this.p21 = this.p22 = true;
        turn = true;
        gameOver = false;
        selected = "empty";
        highlight_moves = Resources.Load("PossibleTilesMove") as Material;
        highlight_builds = Resources.Load("PossibleTilesBuild") as Material;
        //highlightHover = Resources.Load("Outline") as Material;
        player11 = GameObject.Find("Player11");
        player12 = GameObject.Find("Player12");
        player21 = GameObject.Find("Player21");
        player22 = GameObject.Find("Player22");
        PlayerAI = new AI[2];
        set_mode();
        cnt = 0; time = 0; num = 0;
        create_copy();
    }

    void Update()
    {
        if(turn && PlayerAI[0] != null)
        {
            PlayerAI[0].doAI();
            return;
        }else if (!turn && PlayerAI[1] != null)
        {
            PlayerAI[1].doAI();
            return;
        }
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            turnOffBoard();
            GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = true;
        }
        if (turn)//Za crveno/plavno outline
        {
            if (outline_flag)
            {
                outline_flag = false;
                player21.GetComponent<Outline>().enabled = false;
                player22.GetComponent<Outline>().enabled = false;
                player11.GetComponent<Outline>().color = 0;
                player12.GetComponent<Outline>().color = 0;
                player21.GetComponent<Outline>().color = 1;
                player22.GetComponent<Outline>().color = 1;
            }
        }
        else
        {
            if (!outline_flag)
            {
                outline_flag = true;
                player11.GetComponent<Outline>().enabled = false;
                player12.GetComponent<Outline>().enabled = false;
                player11.GetComponent<Outline>().color = 1;
                player12.GetComponent<Outline>().color = 1;
                player21.GetComponent<Outline>().color = 0;
                player22.GetComponent<Outline>().color = 0;
            }
        }
    }

    public bool field_exist(int x, int y)
    {
        if (x > 4 || x < 0 || y > 4 || y < 0)
            return false;
        return true;
    }

    public bool turns(GameObject obj)
    {
        if (turn && (obj.name == "Player11" || obj.name == "Player12"))
            return true;
        else if (!turn && (obj.name == "Player21" || obj.name == "Player22"))
            return true;
        else return false;
    }
    
    public void erase_highlighted(int x, int y)
    {
        int top_level = 0;
        GameObject go = null;
        Renderer temp = null;
        int oldX = x, oldY = y;
        for (int i = oldX - 1; i <= oldX + 1; i++)
            for (int j = oldY - 1; j <= oldY + 1; j++)
            {
                if (!field_exist(i, j))
                    continue;
                if (oldX == i && oldY == j)
                    continue;
                go = GameObject.Find("Tile" + i + "" + j);
                top_level = go.GetComponent<TileButton>().height;
                if (top_level == 4) continue;
                if(top_level == 0) temp = go.GetComponent<Renderer>();
                else temp = go.transform.GetChild(0).transform.GetChild(top_level - 1).transform.GetChild(0).GetComponent<Renderer>();
                Material[] matArray = temp.materials;
                matArray[1] = null;
                temp.materials = matArray;
            }
    }

    public void won(int id)
    {
        gameOver = true;
        string temp = "PLAYER " + id + " IS WINNER!";
        turnOffBoard();
        GameObject.Find("WinnerText").GetComponent<TextMeshProUGUI>().text = temp;
        GameObject.Find("CanvasWinner").GetComponent<Canvas>().enabled = true;
        PlayerAI[0] = null; PlayerAI[1] = null;
        //Debug.Log("Prosecno vreme: " + time / num);
    }

    public int indexOf(char piece)
    {
        if (piece == 'A') // player 11 height 0
            return 0;
        if (piece == 'B') // player 11 height 1
            return 1;
        if (piece == 'C') // player 11 height 2
            return 2;
        if (piece == 'D') // player 11 height 3
            return 3;
        if (piece == 'E') // player 12 height 0
            return 4;
        if (piece == 'F') // player 12 height 1
            return 5;
        if (piece == 'G') // player 12 height 2
            return 6;
        if (piece == 'H') // player 12 height 3
            return 7;
        if (piece == 'a') // player 21 height 0
            return 8;
        if (piece == 'b') // player 21 height 1
            return 9;
        if (piece == 'c') // player 21 height 2
            return 10;
        if (piece == 'd') // player 21 height 3
            return 11;
        if (piece == 'e') // player 22 height 0
            return 12;
        if (piece == 'f') // player 22 height 1
            return 13;
        if (piece == 'g') // player 22 height 2
            return 14;
        if (piece == 'h') // player 22 height 3
            return 15;
        if (piece == '0') // player - height 0
            return 16;
        if (piece == '1') // player - height 1
            return 17;
        if (piece == '2') // player - height 2
            return 18;
        if (piece == '3') // player - height 3
            return 19;
        if (piece == '4') // player - height 4
            return 20;
        else
            return -1;
    }

    public char[,] get_state()
    {
        char[,] temp = new char[5,5];
        temp = get_state_players(temp);
        temp = get_state_tiles(temp);
        return temp;
    } 

    public void print_state()
    {
        char[,] state = this.get_state();
        for (int i = 0; i < 5; i++)
        {
            Debug.Log(cnt + " {" + state[i, 0] + ", " + state[i, 1] + ", " + state[i, 2] + ", " + state[i, 3] + ", " + state[i, 4] + "} "+turn);
            cnt++;
        }
        Debug.Log(cnt + " -----------------------------");
        cnt++;
    }

    public void print_state(char[,] state)
    {
        Debug.Log(cnt++ + state.Length);
        for (int i = 0; i < 5; i++)
        {
            Debug.Log(cnt + " {" + state[i, 0] + ", " + state[i, 1] + ", " + state[i, 2] + ", " + state[i, 3] + ", " + state[i, 4] + "} " + turn);
            cnt++;
        }
        Debug.Log(cnt + " -----------------------------");
        cnt++;
    }

    public char[,] get_state_players(char[,] temp)
    {
        int x;
        int y;
        if (!p11)
        {
            x = player11.GetComponent<Figure>().x; y = player11.GetComponent<Figure>().y;
            switch (GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().height)
            {
                case 0:
                    temp[x, y] = 'A';
                    break;
                case 1:
                    temp[x, y] = 'B';
                    break;
                case 2:
                    temp[x, y] = 'C';
                    break;
                case 3:
                    temp[x, y] = 'D';
                    break;
            }
        }
        if (!p12)
        {
            x = player12.GetComponent<Figure>().x; y = player12.GetComponent<Figure>().y;
            switch (GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().height)
            {
                case 0:
                    temp[x, y] = 'E';
                    break;
                case 1:
                    temp[x, y] = 'F';
                    break;
                case 2:
                    temp[x, y] = 'G';
                    break;
                case 3:
                    temp[x, y] = 'H';
                    break;
            }
        }
        if (!p21) {
            x = player21.GetComponent<Figure>().x; y = player21.GetComponent<Figure>().y;
            switch (GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().height)
            {
                case 0:
                    temp[x, y] = 'a';
                    break;
                case 1:
                    temp[x, y] = 'b';
                    break;
                case 2:
                    temp[x, y] = 'c';
                    break;
                case 3:
                    temp[x, y] = 'd';
                    break;
            }
        }
        if (!p22) {
            x = player22.GetComponent<Figure>().x; y = player22.GetComponent<Figure>().y;
            switch (GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().height)
            {
                case 0:
                    temp[x, y] = 'e';
                    break;
                case 1:
                    temp[x, y] = 'f';
                    break;
                case 2:
                    temp[x, y] = 'g';
                    break;
                case 3:
                    temp[x, y] = 'h';
                    break;
            }
        }
        return temp;
    }
    
    public char[,] get_state_tiles(char[,] temp)
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                TileButton tile = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();
                if (!tile.busy) //nema figurice na polju
                {
                    switch (tile.height)
                    {
                        case 0:
                            temp[i, j] = '0';
                            break;
                        case 1:
                            temp[i, j] = '1';
                            break;
                        case 2:
                            temp[i, j] = '2';
                            break;
                        case 3:
                            temp[i, j] = '3';
                            break;
                        case 4:
                            temp[i, j] = '4';
                            break;
                    }
                    continue;
                }
            }
        return temp;
    }

    public void repaint(char[,] new_state)
    {
        char[,] curr_state = get_state();
        //print_state(curr_state);
        for (int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++)
            {
                if (curr_state[i, j] == new_state[i, j])
                    continue;
                //Promenice se u tri slucaja, tamo odakle se pomerio, tamo gde se pomerio i tamo gde je sagradio
                if(indexOf(curr_state[i,j])<16 && indexOf(new_state[i, j]) > 15) //figurica je bila na tom polju al sada vise nije
                {
                    GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().busy = false; //Nemamo nista da menjamo jer mi menjamo samo figuricu a ona vise nije ovde tako da samo unbusy(tile)
                    //Debug.Log("Tile" + i + "" + j);
                    continue;
                }
                if (indexOf(curr_state[i, j]) > 15 && indexOf(new_state[i, j]) < 16) //figurica nije bila ali sada jeste
                {
                    if (indexOf(curr_state[i, j]) - 16 == 3)
                        if (turn)
                        {
                           won(1);
                        }
                        else won(2);
                    if (indexOf(new_state[i, j]) % 4 != indexOf(curr_state[i, j]) % 4)//Ukoliko se pomeri na susedno polje i sagradi na polju na kome je prethodno bio
                    {
                        GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().height++;
                        int height = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().height;
                        GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.SetActive(true);
                        level.layer = 0;
                    }
                    TileButton tile = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();
                    int id, id2;
                    if (turn) id = 1;
                    else id = 2;
                    if (indexOf(new_state[i, j]) < 4 || (indexOf(new_state[i, j]) > 7 && indexOf(new_state[i, j]) < 12)) id2 = 1;
                    else id2 = 2;
                    tile.xyz_axis(tile.height, GameObject.Find("Player" + id + "" + id2));
                    tile.busy = true;
                    continue;
                }
                if (indexOf(curr_state[i, j]) > 15 && indexOf(new_state[i, j]) > 15) //polje gde se sagradilo
                {
                    GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().height++;
                    int height = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().height;
                    GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                    Debug.Log("Tile" + i + "" + j + "/house/Level" + height);
                    level.SetActive(true);
                    level.layer = 0;
                    continue;
                }

            }
    }

    public void repaint_undo(char[,] undo_state)
    {
        char[,] curr_state = get_state();
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (curr_state[i, j] == undo_state[i, j])
                    continue;
                //Promenice se u tri slucaja, tamo odakle se pomerio, tamo gde se pomerio i tamo gde je sagradio
                if (indexOf(curr_state[i, j]) < 16 && indexOf(undo_state[i, j]) > 15) //figurica je na tom polju al pre toga nije bila (undo)
                {
                    Vector3 temp;
                    int id, id2;
                    if (undo_turn) id = 1;
                    else id = 2;
                    if (indexOf(curr_state[i, j]) < 4 || (indexOf(curr_state[i, j]) > 7 && indexOf(curr_state[i, j]) < 12)) id2 = 1;
                    else id2 = 2;
                    GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>().busy = false; //Nemamo nista da menjamo jer mi menjamo samo figuricu a ona vise nije ovde tako da samo unbusy(tile)

                    if (undo_p11 || undo_p12 || undo_p21 || undo_p22)//SAMO ZA UNDO POSTAVLJANJA FIGURICA
                    {
                        temp = new Vector3(-1, 0, 0);
                        GameObject player = GameObject.Find("Player" + id + "" + id2);
                        player.transform.position = temp;
                        player.GetComponent<Renderer>().enabled = false;
                    }
                    erase_highlighted(i,j);
                    continue;
                }
                if (indexOf(curr_state[i, j]) > 15 && indexOf(undo_state[i, j]) < 16) //figurica je bila na tom polju ali smo je pomerili i sad moramo da je vratimo
                {
                    TileButton tile = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();


                    if (indexOf(undo_state[i, j]) % 4 != indexOf(curr_state[i, j]) % 4)//Ukoliko se pomeri na susedno polje i sagradi na polju na kome je prethodno bio
                    {
                        int height = tile.GetComponent<TileButton>().height;
                        GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.SetActive(false);
                        level.layer = 2;//ignore Raycast
                        tile.GetComponent<TileButton>().height--;
                        level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.layer = 0;//da vise ne ignorise Raycast
                    }

                    int id, id2;
                    if (undo_turn) id = 1;
                    else id = 2;
                    if (indexOf(undo_state[i, j]) < 4 || (indexOf(undo_state[i, j]) > 7 && indexOf(undo_state[i, j]) < 12)) id2 = 1;
                    else id2 = 2;
                    GameObject player = GameObject.Find("Player" + id + "" + id2);
                    tile.xyz_axis(indexOf(undo_state[i, j]) % 4, player);//prosledjujemo visinu na kojoj se nalazio u undo_state
                    tile.busy = true;

                    continue;
                }
                if (indexOf(curr_state[i, j]) > 15 && indexOf(undo_state[i, j]) > 15) //polje gde se sagradilo
                {
                    GameObject tile = GameObject.Find("Tile" + i + "" + j);
                    int height = tile.GetComponent<TileButton>().height;
                    GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                    level.SetActive(false);
                    level.layer = 2;//ignore Raycast
                    height = tile.GetComponent<TileButton>().height--;
                    if (height != 0)
                    {
                        level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.layer = 0;//da vise ne ignorise Raycast
                    }
                    continue;
                }

            }
    }

    public void repaint_undo_ai(char[,] undo_state)
    {
        //Za postavljanje figurica
        if (undo_p11 || undo_p12)
        {
            Vector3 temp = new Vector3(-1, 0, 0);
            GameObject player;

            if (undo_p11)
            {
                player = GameObject.Find("Player11");
                int x = (int)player.transform.position.x, y = (int)player.transform.position.z;
                erase_highlighted(x, y);
                GameObject.Find("Tile" + x + "" + y ).GetComponent<TileButton>().busy = false;
                player.transform.position = temp;
                player.GetComponent<Renderer>().enabled = false;
            }
            else
            {
                player = GameObject.Find("Player12");
                int x = (int)player.transform.position.x, y = (int)player.transform.position.z;
                erase_highlighted(x, y);
                GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().busy = false;
                player.transform.position = temp;
                player.GetComponent<Renderer>().enabled = false;

                player = GameObject.Find("Player21");
                x = (int)player.transform.position.x; y = (int)player.transform.position.z;
                erase_highlighted(x, y);
                GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().busy = false;
                player.transform.position = temp;
                player.GetComponent<Renderer>().enabled = false;

                player = GameObject.Find("Player22");
                x = (int)player.transform.position.x; y = (int)player.transform.position.z;
                erase_highlighted(x, y);
                GameObject.Find("Tile" + x + "" + y).GetComponent<TileButton>().busy = false;
                player.transform.position = temp;
                player.GetComponent<Renderer>().enabled = false;

            }
            return;
        }
        //TODO Vratiti i Player 21 i Player22 za svaku situaciju
        char[,] curr_state = get_state();
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                if (curr_state[i, j] == undo_state[i, j])
                    continue;

                //Promenice se u tri slucaja, tamo odakle se pomerio, tamo gde se pomerio i tamo gde je sagradio
                if (indexOf(curr_state[i, j]) < 16 && indexOf(undo_state[i, j]) > 15) //figurica je na tom polju al pre toga nije bila (undo)
                {
                    TileButton tile = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>(); //Nemamo nista da menjamo jer mi menjamo samo figuricu a ona vise nije ovde tako da samo unbusy(tile)
                    tile.busy = false;
                    erase_highlighted(i, j);

                    if (indexOf(undo_state[i, j]) % 4 != indexOf(curr_state[i, j]) % 4)//Ukoliko se pomeri na susedno polje i sagradi na polju na kome je prethodno bio
                    {
                        int height = tile.GetComponent<TileButton>().height;
                        GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.SetActive(false);
                        level.layer = 2;//ignore Raycast
                        tile.GetComponent<TileButton>().height--;
                        level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.layer = 0;//da vise ne ignorise Raycast
                    }
                    continue;
                }
                if (indexOf(undo_state[i, j]) < 16) //figurica je bila na tom polju ali smo je pomerili i sad moramo da je vratimo
                {
                    TileButton tile = GameObject.Find("Tile" + i + "" + j).GetComponent<TileButton>();

                    //PROVERITI KASNIJE
                    if (indexOf(undo_state[i, j]) % 4 != indexOf(curr_state[i, j]) % 4)//Ukoliko se pomeri na susedno polje i sagradi na polju na kome je prethodno bio
                    {
                        int height = tile.GetComponent<TileButton>().height;
                        GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.SetActive(false);
                        level.layer = 2;//ignore Raycast
                        tile.GetComponent<TileButton>().height--;
                        level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.layer = 0;//da vise ne ignorise Raycast
                    }

                    int id;
                    if (indexOf(undo_state[i, j]) < 4) id = 11;
                    else if (indexOf(undo_state[i, j]) < 8) id = 12;
                    else if (indexOf(undo_state[i, j]) < 12) id = 21;
                    else id = 22;
                    GameObject player = GameObject.Find("Player" + id);
                    tile.xyz_axis(indexOf(undo_state[i, j]) % 4, player);//prosledjujemo visinu na kojoj se nalazio u undo_state i menjamo poziciju figurice
                    tile.busy = true;

                    continue;
                }
                if (indexOf(curr_state[i, j]) > 15 && indexOf(undo_state[i, j]) > 15) //polje gde se sagradilo
                {
                    GameObject tile = GameObject.Find("Tile" + i + "" + j);
                    int height = tile.GetComponent<TileButton>().height;
                    GameObject level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                    level.SetActive(false);
                    level.layer = 2;//ignore Raycast
                    height = tile.GetComponent<TileButton>().height--;
                    if (height != 0)
                    {
                        level = GameObject.Find("Tile" + i + "" + j + "/house/Level" + height).gameObject;
                        level.layer = 0;//da vise ne ignorise Raycast
                    }
                    continue;
                }
            }
    }

    public void set_mode()
    {
        if (LevelLoader.mode == 2)
        {
            PlayerAI[0] = null;
            PlayerAI[1] = new AI(false);
        }
        else if(LevelLoader.mode == 3)
        {
            GameObject.Find("Undo").SetActive(false);
            PlayerAI[0] = new AI(true);
            PlayerAI[1] = new AI(false);
        }
    }

    public void create_copy()
    {
        undo_state = get_state();
        undo_start = start;
        undo_p11 = p11;
        undo_p12 = p12;
        undo_p21 = p21;
        undo_p22 = p22;
        undo_build = build;
        undo_turn = turn;
        undo_selected = selected;
    }

    public void undo()
    {
        char[,] cur_state = get_state();
        print_state(cur_state);
        print("***************************************************");
        print_state(undo_state);//Output in console
        if (LevelLoader.mode != 2)
            repaint_undo(undo_state);
        else repaint_undo_ai(undo_state);
        start = undo_start;
        p11 = undo_p11;
        p12 = undo_p12;
        p21 = undo_p21;
        p22 = undo_p22;
        build = undo_build;
        turn = undo_turn;
        selected = undo_selected;
    }

    public void turnOffBoard()
    {
        /*for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                GameObject.Find("Player" + i + "" + j).GetComponent<MeshCollider>().enabled = false;*/
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                GameObject.Find("Tile" + i + "" + j).GetComponent<BoxCollider>().enabled = false;
                for (int k = 1; k < 4; k++)
                {
                    GameObject.Find("Tile" + i + "" + j + "/house/Level"+k).GetComponent<BoxCollider>().enabled = false;
                }
            }
    }

    public void turnOnBoard()
    {
        /*for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                GameObject.Find("Player" + i + "" + j).GetComponent<MeshCollider>().enabled = true;*/
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                GameObject.Find("Tile" + i + "" + j).GetComponent<BoxCollider>().enabled = true;
                for (int k = 1; k < 4; k++)
                {
                    GameObject.Find("Tile" + i + "" + j + "/house/Level" + k).GetComponent<BoxCollider>().enabled = true;
                }
            }
    }
}
