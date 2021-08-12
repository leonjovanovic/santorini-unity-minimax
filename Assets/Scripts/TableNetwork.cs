using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.Networking;
using cakeslice;

public class TableNetwork : NetworkBehaviour
{
    [SyncVar]
    public bool start, p11, p12, p21, p22, build, turn, gameOver;//turn=true je prvi igrac

    public bool[,] busy = new bool[5,5];
    public string selected, moved;
    public Material highlight_moves, highlight_builds, highlightHover;
    public GameObject player11, player12, player21, player22;// da bi u Figure.Update() ne bi stalno trazili
    public AI[] PlayerAI;
    public int cnt;
    public long time, num;
    public bool joined = false;
    private bool outline_flag = true, assign_players = true;//One time bools

    public char[,] undo_state;
    public bool undo_start, undo_p11, undo_p12, undo_p21, undo_p22, undo_build, undo_turn;
    public string undo_selected;

    // Start is called before the first frame update
    void Start()
    {

        Application.targetFrameRate = 60;
        Screen.SetResolution(1920, 1080, true);

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                busy[i, j] = false; 

        this.start = false;
        this.p11 = this.p12 = this.p21 = this.p22 = true;
        turn = true;
        gameOver = false;
        selected = "empty";
        highlight_moves = Resources.Load("PossibleTilesMove") as Material;
        highlight_builds = Resources.Load("PossibleTilesBuild") as Material;
        highlightHover = Resources.Load("Outline") as Material;
        cnt = 0; time = 0; num = 0;
    }

    void Update()
    {
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            turnOffBoard();
            GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = true;
        }
        if (start)//figurice postavljene
        {
            if (assign_players)
            {
                assign_players = false;
                //FOR ASSIGNING TABLE PLAYERS AFTER WE PLACED THEM ALL
                player11 = GameObject.Find("Player11");
                player12 = GameObject.Find("Player12");
                player21 = GameObject.Find("Player21");
                player22 = GameObject.Find("Player22");
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
    }


    public bool turns(string obj)
    {
        if (turn && (obj == "Player11" || obj == "Player12"))
            return true;
        else if (!turn && (obj == "Player21" || obj == "Player22"))
            return true;
        else return false;
    }

    public bool field_exist(int x, int y)
    {
        if (x > 4 || x < 0 || y > 4 || y < 0)
            return false;
        return true;
    }

    public void turnOffBoard()
    {
        for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                if (GameObject.Find("Player" + i + "" + j) != null) GameObject.Find("Player" + i + "" + j).GetComponent<MeshCollider>().enabled = false;
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                GameObject.Find("Tile" + i + "" + j).GetComponent<BoxCollider>().enabled = false;
                for (int k = 1; k < 4; k++)
                {
                    GameObject.Find("Tile" + i + "" + j + "/house/Level" + k).GetComponent<BoxCollider>().enabled = false;
                }
            }
    }

    public void turnOnBoard()
    {
        for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                if (GameObject.Find("Player" + i + "" + j) != null) GameObject.Find("Player" + i + "" + j).GetComponent<MeshCollider>().enabled = true;
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
