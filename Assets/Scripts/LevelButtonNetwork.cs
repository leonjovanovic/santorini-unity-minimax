using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelButtonNetwork : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void OnMouseDown()
    {
        StartCoroutine(GameObject.Find(gameObject.transform.parent.transform.parent.transform.parent.name).GetComponent<TileButtonNetwork>().OnMouseDown()); // mora preko StartCoroutine jer je specificna funkcija
    }
}
