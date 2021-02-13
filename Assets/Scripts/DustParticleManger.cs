using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DustParticleManger : MonoBehaviour
{
    public ParticleSystem dustMove, dustBuild, dustBuildAI;
    //private Table table;
    // Start is called before the first frame update
    void Start()
    {
        //table = GameObject.Find("The Board").GetComponent<Table>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void playDustMove(float x, float z, float y)
    {
        Vector3 new_pos = new Vector3(x, y, z);
        dustMove.transform.position = new_pos;
        dustMove.Play();
    }

    public void playDustBuild(float x, float z, float y, float sx, float sy, float sz, bool ai)
    {
        ParticleSystem temp;
        if (ai) temp = dustBuildAI;
        else temp = dustBuild;

        Vector3 new_pos = new Vector3(x, y, z);
        temp.transform.position = new_pos;
        new_pos = new Vector3(sx, sy, sz);
        temp.transform.localScale = new_pos;
        temp.Play();
    }

}
