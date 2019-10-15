using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateCameraRight : MonoBehaviour
{
    public Material highlightHover;
    Ray ray;
    RaycastHit hit;
    // Start is called before the first frame update
    void Start()
    {
        highlightHover = Resources.Load("Outline") as Material;
    }

    void OnMouseOver()
    {
        Material[] matArray = gameObject.GetComponent<Renderer>().materials;
        matArray[1] = highlightHover;
        gameObject.GetComponent<Renderer>().materials = matArray;
    }

    void OnMouseExit()
    {
        Material[] matArray = gameObject.GetComponent<Renderer>().materials;
        matArray[1] = null;
        gameObject.GetComponent<Renderer>().materials = matArray;
    }

    void OnMouseDown()
    {
        string name = gameObject.name;
        /*
        switch (name)
        {
            case "Arrow Bottom Right":
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = true;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = false;

                rotateFiguresLeft();
                break;
            case "Arrow Bottom Left":
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = true;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = false;

                rotateFiguresRight();
                break;
            case "Arrow Right Bottom":
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = true;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = false;

                rotateFiguresRight();
                break;
            case "Arrow Right Up":
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = true;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = false;

                rotateFiguresLeft();
                break;
            case "Arrow Up Right":
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = false;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = true;

                rotateFiguresRight();
                break;
            case "Arrow Up Left":
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera Right").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = false;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = true;

                rotateFiguresLeft();
                break;
            case "Arrow Left Bottom":
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Left Up").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = false;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = true;

                rotateFiguresLeft();
                break;
            case "Arrow Left Up":
                GameObject.Find("Main Camera Left").GetComponent<Camera>().enabled = true;
                GameObject.Find("Main Camera").GetComponent<Camera>().enabled = false;
                GameObject.Find("Main Camera Up").GetComponent<Camera>().enabled = false;

                GameObject.Find("Arrow Right Bottom").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Right Up").GetComponent<Renderer>().enabled = false;
                gameObject.GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Left Bottom").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Arrow Bottom Left").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Up Left").GetComponent<Renderer>().enabled = true;
                GameObject.Find("Arrow Bottom Right").GetComponent<Renderer>().enabled = false;
                GameObject.Find("Arrow Up Right").GetComponent<Renderer>().enabled = false;

                GameObject.Find("Directional Light").GetComponent<Light>().enabled = false;
                GameObject.Find("Directional Light 2").GetComponent<Light>().enabled = true;
                rotateFiguresRight();
                break;
        }
        */
    }

    public void rotateFiguresRight()
    {
        Vector3 delta = new Vector3(0, 90, 0);
        for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                GameObject.Find("Player" + i + "" + j).transform.eulerAngles -= delta;
    }

    public void rotateFiguresLeft()
    {
        Vector3 delta = new Vector3(0, 90, 0);
        for (int i = 1; i < 3; i++)
            for (int j = 1; j < 3; j++)
                GameObject.Find("Player" + i + "" + j).transform.eulerAngles += delta;
    }

    public void highlight()
    {
        Material[] matArray = gameObject.GetComponent<Renderer>().materials;
        matArray[1] = highlightHover;
        gameObject.GetComponent<Renderer>().materials = matArray;
    }
}
