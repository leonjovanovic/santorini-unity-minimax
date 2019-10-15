using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class ExampleListener : CaptainsMessListener
{
	public enum NetworkState
	{
		Init,
		Offline,
		Connecting,
		Connected,
		Disrupted
	};
	[HideInInspector]
	public NetworkState networkState = NetworkState.Init;
	public Text networkStateField;
	
	public GameObject gameSessionPrefab;
	public ExampleGameSession gameSession;

	public void Start()
	{
		networkState = NetworkState.Offline;

		ClientScene.RegisterPrefab(gameSessionPrefab);
	}//Postavi stanje na offline inicijalno i registruje prefab GameSession-a

	public override void OnStartConnecting()
	{
		networkState = NetworkState.Connecting;
    }//Promeni stanje na Connecting

    public override void OnStopConnecting()
	{
		networkState = NetworkState.Offline;
    }//Promeni stanje na Offline

    public override void OnServerCreated()
	{
		// Create game session
		ExampleGameSession oldSession = FindObjectOfType<ExampleGameSession>();
		if (oldSession == null)
		{
			GameObject serverSession = Instantiate(gameSessionPrefab);
			NetworkServer.Spawn(serverSession);
		}
		else
		{
			Debug.LogError("GameSession already exists!");
		}
	}//Pravi sesiju, PROVERITI kasnije, mozda se ovde menja GameSession

	public override void OnJoinedLobby()
	{
		networkState = NetworkState.Connected;

		gameSession = FindObjectOfType<ExampleGameSession>();
		if (gameSession) {
			gameSession.OnJoinedLobby();
		}
	}//Ako su oba igraca spremna

	public override void OnLeftLobby()
	{
		networkState = NetworkState.Offline;

		gameSession.OnLeftLobby();
	}//Ako je neko napustio lobby

	public override void OnCountdownStarted()
	{
		gameSession.OnCountdownStarted();
	}//Broji od 3 da krene partija

	public override void OnCountdownCancelled()
	{
		gameSession.OnCountdownCancelled();
	}//Odbrojavanje prekinuto

	public override void OnStartGame(List<CaptainsMessPlayer> aStartingPlayers)
	{
		Debug.Log("GO!");
		gameSession.OnStartGame(aStartingPlayers);
	}//Igrica se startuje a listener prosledjuje listu igraca

	public override void OnAbortGame()
	{
		Debug.Log("ABORT!");
		gameSession.OnAbortGame();
	}//Prekini partiju

	void Update()
	{
		networkStateField.text = networkState.ToString();	
	}//Stalno ispisuj u kom se stanju nalazi
}
