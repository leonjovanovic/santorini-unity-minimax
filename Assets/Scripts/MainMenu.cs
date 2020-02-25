using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour    
{
    void Start()
    {
        Application.targetFrameRate = 30;
        Screen.SetResolution(1280, 720, FullScreenMode.Windowed, 60);
    }
    public void playGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void resetGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
    }

    public void quitGame()
    {
        Application.Quit();
    }

    public void backToGame()
    {
        for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                GameObject.Find("Player" + i + "" + j).GetComponent<Figure>().enabled = true;
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                GameObject.Find("Tile" + i + "" + j + "/Cube - Visual").layer = 0;
            }
        GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = false;
    }
}
