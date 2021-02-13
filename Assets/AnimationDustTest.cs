using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimationDustTest : MonoBehaviour
{
    private Animator anim;
    public ParticleSystem dustBuild;
    private bool played = false, flag = true;
    // Start is called before the first frame update
    void Start()
    {
        anim = GameObject.Find("Level3 test").GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (anim != null)
            {
                played = false; flag = true;
                anim.Play("House.Level3Drop", 0, 0);

                dustBuild.Play();
            }
        }
        /*if (anim.GetCurrentAnimatorStateInfo(0).normalizedTime > anim.GetCurrentAnimatorStateInfo(0).length/35) 
            if (played)
            {
                if (flag)
                {
                    flag = false;
                    //dustBuild.Play();
                }
            }
        else
            played = true;*/
    }
}
