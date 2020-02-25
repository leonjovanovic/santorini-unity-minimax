using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;
using UnityEngine.Networking;

public class TableNetwork : NetworkBehaviour
{
    [SyncVar]
    public bool start, p11, p12, p21, p22, build, turn, gameOver;//turn=true je prvi igrac

    public bool[,] busy = new bool[5,5];
    public string selected, moved;
    public Material highlight, highlightHover;
    public GameObject player11, player12, player21, player22;// da bi u Figure.Update() ne bi stalno trazili
    public AI[] PlayerAI;
    public int cnt;
    public long time, num;

    public char[,] undo_state;
    public bool undo_start, undo_p11, undo_p12, undo_p21, undo_p22, undo_build, undo_turn;
    public string undo_selected;

    // Start is called before the first frame update
    void Start()
    {

        Application.targetFrameRate = 30;
        Screen.SetResolution(1920, 1080, false);

        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                busy[i, j] = false; 

        this.start = false;
        this.p11 = this.p12 = this.p21 = this.p22 = true;
        turn = true;
        gameOver = false;
        selected = "empty";
        highlight = Resources.Load("PossibleTiles") as Material;
        highlightHover = Resources.Load("Outline") as Material;
        cnt = 0; time = 0; num = 0;
    }

    void Update()
    {
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            /*for (int i = 1; i < 3; i++)
                for (int j = 1; j < 3; j++)
                    GameObject.Find("Player" + i + "" + j).GetComponent<Figure>().enabled = false;
            for (int i = 0; i < 5; i++)
                for (int j = 0; j < 5; j++)
                {
                    GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").layer = 2;
                }*/
            GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = true;
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

}
