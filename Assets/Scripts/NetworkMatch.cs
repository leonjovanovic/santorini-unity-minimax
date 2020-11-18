using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking.Types;

public class NetworkMatch : MonoBehaviour
{
    public string matchName;
    public ulong networkID;
    public LobbyManager lobbyScript;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void joinMatch()
    {
       lobbyScript.joinRoom(matchName, (NetworkID) networkID);
    }
}
