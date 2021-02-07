using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class LevelLoader : MonoBehaviour
{
    public GameObject loadingScreen;
    public Slider slider;
    public TextMeshProUGUI progressText;
    public static int mode = 1;
    public static int previousPlayAgain = 0;
    public GameObject GameManager;

    public void LoadLevel(int sceneIndex)
    {
        StartCoroutine(LoadAsynchronously(sceneIndex));
    }

    public void set_mode(int i)
    {
        mode = i;
    }

    public static void set_previousPlayAgain(int i)
    {
        previousPlayAgain = i;
    }

    public IEnumerator LoadAsynchronously(int sceneIndex)
    {
        AsyncOperation op = SceneManager.LoadSceneAsync(sceneIndex);

        loadingScreen.SetActive(true);

        while (!op.isDone)
        {
            float progress = Mathf.Clamp01(op.progress / .9f);
            slider.value = progress;
            progressText.text = Math.Round(new decimal(progress * 100f), 2) + "%";

            yield return null;
        }
    }
}
