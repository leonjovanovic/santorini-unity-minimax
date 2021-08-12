using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioClip audioMove, audioBuild;
    private AudioSource audio, camera;
    private bool soundEnabled = true;
    // Start is called before the first frame update
    void Start()
    {
        audio = gameObject.GetComponent<AudioSource>();
        camera = GameObject.Find("Main Camera").GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void playAudioMove()
    {
        if (soundEnabled)
        {
            audio.clip = audioMove;
            audio.Play();
        }
    }

    public void playAudioBuild()
    {
        if (soundEnabled)
        {
            audio.clip = audioBuild;
            audio.Play();
        }
    }

    public void playAudioMain()
    {
        camera.Play();
    }

    public void toggleAudioMusic(bool musicEnabled)
    {
        if (musicEnabled)
        {
            camera.mute = false;
        }
        else
        {
            camera.mute = true;
        }
    }

    public void toggleAudioSound(bool flag)
    {
        soundEnabled = flag;
    }
}
