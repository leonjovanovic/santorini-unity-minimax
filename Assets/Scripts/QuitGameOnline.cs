using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuitGameOnline : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            if (GameObject.Find("The Board Network(Clone)")) GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOffBoard();
            GameObject.Find("CanvasExit").GetComponent<Canvas>().enabled = true;
        }
    }
}
