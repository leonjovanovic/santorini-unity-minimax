using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpdateUndoButton : MonoBehaviour
{
    private Table table;
    // Start is called before the first frame update
    void Start()
    {
        if (LevelLoader.mode == 1 || LevelLoader.mode == 2) table = GameObject.Find("The Board").GetComponent<Table>();
    }

    // Update is called once per frame
    void Update()
    {
        if (table.undo_allowed && !gameObject.GetComponent<Button>().interactable)
        {
            gameObject.GetComponent<Button>().interactable = true;
        } 
        else if (!table.undo_allowed && gameObject.GetComponent<Button>().interactable)
        {
            gameObject.GetComponent<Button>().interactable = false;
        }
    }
}
