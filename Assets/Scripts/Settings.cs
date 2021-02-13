using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Settings : MonoBehaviour
{
    public Material possible_moves, possible_builds;
    // Start is called before the first frame update
    void Start()
    {
        toggleOutline(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void turnOnSettings()
    {
        if (LevelLoader.mode != 4) GameObject.Find("The Board").GetComponent<Table>().turnOffBoard();
        else if (GameObject.Find("The Board Network(Clone)")) GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOffBoard();
        GameObject.Find("CanvasSettings").GetComponent<Canvas>().enabled = true;
    }

    public void turnOffSettings()
    {
        if (LevelLoader.mode != 4) GameObject.Find("The Board").GetComponent<Table>().turnOnBoard();
        else if(GameObject.Find("The Board Network(Clone)")) GameObject.Find("The Board Network(Clone)").GetComponent<TableNetwork>().turnOnBoard();
        GameObject.Find("CanvasSettings").GetComponent<Canvas>().enabled = false;
    }

    public void toggleOutline(bool i)
    {
        Color color = possible_moves.color;
        if (i) color.a = 0.27451f;
        else color.a = 0f;
        possible_moves.color = color;
        
        color = possible_builds.color;
        if (i) color.a = 0.27451f;
        else color.a = 0f;
        possible_builds.color = color;
    }
<<<<<<< Updated upstream
=======

>>>>>>> Stashed changes
}
