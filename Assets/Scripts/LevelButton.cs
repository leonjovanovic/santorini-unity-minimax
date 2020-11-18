using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelButton : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    //Pre Blender
    /*void OnMouseDown()
    {
        Debug.Log(gameObject.name);
        gameObject.transform.parent.transform.parent.GetComponent<TileButton>().OnMouseDown();
    }*/

    //Post Blender
    void OnMouseDown()
    {
        if(LevelLoader.mode != 4) gameObject.transform.parent.transform.parent.GetComponent<TileButton>().OnMouseDown();
        else StartCoroutine(gameObject.transform.parent.transform.parent.GetComponent<TileButtonNetwork>().OnMouseDown()); // mora preko StartCoroutine jer je specificna funkcija
    }
}
