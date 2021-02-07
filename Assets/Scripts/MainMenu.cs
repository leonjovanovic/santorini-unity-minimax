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
        Application.targetFrameRate = 300;
        Screen.SetResolution(1920, 1080, FullScreenMode.ExclusiveFullScreen, 300);
    }
    public void playGame()
    {
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void resetGame()
    {
        if (LevelLoader.mode != 4)
        {
            SceneManager.LoadScene(0);
        }
        else
        {
            GameObject.Find("Center").GetComponent<Settings>().toggleOutline(true);
            manager.StopHost();
            manager.StopClient();
            manager.StopMatchMaker();
            SceneManager.LoadScene(0);
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

    public void playAgain()
    {
        if (LevelLoader.mode != 4)//Offline
        {
            SceneManager.sceneLoaded += OnLevelFinishedLoading1;
            SceneManager.LoadScene(0);
        }
        else //Online
        {
            GameObject.Find("Center").GetComponent<Settings>().toggleOutline(true);
            manager.StopHost();
            manager.StopClient();
            manager.StopMatchMaker();
            SceneManager.sceneLoaded += OnLevelFinishedLoading2;
            SceneManager.LoadScene(0);
        }

    }

    void OnLevelFinishedLoading1(Scene scene, LoadSceneMode mode)
    {
        GameObject.Find("MainMenu").SetActive(false);
        GameObject.Find("LevelLoader").GetComponent<LevelLoader>().LoadLevel(1);
        SceneManager.sceneLoaded -= OnLevelFinishedLoading1;
    }

    void OnLevelFinishedLoading2(Scene scene, LoadSceneMode mode)
    {
        GameObject.Find("MainMenu").SetActive(false);
        GameObject.Find("LevelLoader").GetComponent<LevelLoader>().LoadLevel(2);
        SceneManager.sceneLoaded -= OnLevelFinishedLoading2;
    }
}
