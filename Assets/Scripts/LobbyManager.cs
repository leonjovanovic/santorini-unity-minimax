using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Networking.Match;
using UnityEngine.Networking.Types;
using TMPro;
using System;

public class LobbyManager : NetworkBehaviour
{
    public NetworkManager networkManager;
    public GameObject noRooms;
    public GameObject room;
    public GameObject content;
    public GameObject lobby, game;
    List<GameObject> roomList = new List<GameObject>();
    List<int> roomNumbers = new List<int>();
    System.Random rand;
    //private int roomNumber = 0000;
    public GameObject roomNum;

    // Start is called before the first frame update
    void Start()
    {
        rand = new System.Random();
        networkManager.StartMatchMaker();
        refreshRooms();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void createRoom()
    {
        networkManager.StartMatchMaker();
        int matchNum = generateRoomNumber();
        roomNum.GetComponent<TMPro.TMP_Text>().text = matchNum.ToString();
        networkManager.matchMaker.CreateMatch(matchNum.ToString(), networkManager.matchSize, true, "", "", "", 0, 0, networkManager.OnMatchCreate);
        GameObject.Find("Center").GetComponent<SoundManager>().playAudioMain();
        changeCanvases();
    }

    public void joinRoom(string matchName, NetworkID networkId)
    {
        networkManager.matchName = matchName;
        networkManager.matchMaker.JoinMatch(networkId, "", "", "", 0, 0, networkManager.OnMatchJoined);
        GameObject.Find("Center").GetComponent<SoundManager>().playAudioMain();
        changeCanvases();
    }

    private void changeCanvases()
    {
        lobby.SetActive(false);
        game.SetActive(true);
    }

    public void refreshRooms()
    {
        ClearRoomList();
        networkManager.matchMaker.ListMatches(0, 20, "", true, 0, 0, OnMatchList);
    }

    public void OnMatchList(bool success, string extendedInfo, List<MatchInfoSnapshot> matches)
    {
        networkManager.OnMatchList(success, extendedInfo, matches);
        foreach (var match in networkManager.matches)
        {
            GameObject roomlistItem = Instantiate(room);
            roomlistItem.SetActive(true);
            roomlistItem.transform.GetChild(0).GetComponent<TextMeshProUGUI>().text = match.name;
            roomlistItem.GetComponent<NetworkMatch>().matchName = match.name;
            roomlistItem.GetComponent<NetworkMatch>().networkID = (ulong) match.networkId;
            roomlistItem.transform.SetParent(content.transform);
            roomList.Add(roomlistItem);
        }
        if (roomList.Count == 0) noRooms.SetActive(true);
        else noRooms.SetActive(false);
    }

    void ClearRoomList()
    {
        for (int i = 0; i < roomList.Count; i++)
        {
            Destroy(roomList[i]);
        }
        roomList.Clear();
    }

    public int generateRoomNumber()
    {
        refreshRooms();
        int num;
        bool flag;
        do
        {
            num = rand.Next(1000, 9999);
            flag = false;
            foreach (var roomCard in roomList)
            {
                if (Int32.Parse(roomCard.GetComponent<NetworkMatch>().matchName) == num) flag = true;
            }
        } while (flag);
        return num;
    }
}
