using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;

public class MainMenu : MonoBehaviour    
{
    public NetworkManager manager;
    void Start()
    {
        Application.targetFrameRate = 60;
        Screen.SetResolution(1920, 1080, FullScreenMode.ExclusiveFullScreen, 60);
    }
    public void playGame()
    {
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void resetGame()
    {
        if (LevelLoader.mode != 4) SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 1);
        else
        {
            manager.StopHost();
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex - 2);
        }
    }

    public void quitGame()
    {
        Application.Quit();
    }

    public void backToGame()
    {
        if (LevelLoader.mode != 4) GameObject.Find("The Board").GetComponent<Table>().turnOnBoard();
        else GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOnBoard();
        GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = false;
    }
}
