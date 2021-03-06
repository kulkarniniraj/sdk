import "blokus"

// FOR COMMUNICATION //////////////////////////////////////////
public struct GameInfo
{
   char players[MaxPlayers][256];
   int numPlayers;
   PlayerColor firstColor;

   void OnSerialize(SerialBuffer buffer)
   {
      buffer.Serialize((StaticString)players[0]);
      buffer.Serialize((StaticString)players[1]);
      buffer.Serialize((StaticString)players[2]);
      buffer.Serialize((StaticString)players[3]);
      buffer.Serialize(numPlayers);
      buffer.Serialize(firstColor);
   }

   void OnUnserialize(SerialBuffer buffer)
   {
      buffer.Unserialize((StaticString)players[0]);
      buffer.Unserialize((StaticString)players[1]);
      buffer.Unserialize((StaticString)players[2]);
      buffer.Unserialize((StaticString)players[3]);
      buffer.Unserialize(numPlayers);
      buffer.Unserialize(firstColor);
   }
};

public class Player
{
   ServerConnection connection;
   int id;
   char * name;
   PlayerColor firstColor;

   ~Player()
   {
      delete name;
   }
};

Player serverPlayers[MaxPlayers];
bool serverGameStarted;

BlokusGameState serverGameState;

DCOMSendControl sendControl { };

void StartGame()
{
   int c;

   sendControl.Stop();
   serverGameState.numPlayers = 0;
   for(c = 0; c<MaxPlayers; c++)
      if(serverPlayers[c])
         serverGameState.numPlayers++;

   if(serverGameState.numPlayers > 0)
   {
      GameInfo gameInfo { };

      serverGameState.NewGame();
      serverGameStarted = true;

      strcpy(gameInfo.players[0], serverPlayers[0] ? serverPlayers[0].name : "");
      strcpy(gameInfo.players[1], serverPlayers[1] ? serverPlayers[1].name : "");
      strcpy(gameInfo.players[2], serverPlayers[2] ? serverPlayers[2].name : "");
      strcpy(gameInfo.players[3], serverPlayers[3] ? serverPlayers[3].name : "");

      gameInfo.numPlayers = serverGameState.numPlayers;

      for(c = 0; c<MaxPlayers; c++)
         if(serverPlayers[c])
         {
            serverPlayers[c].firstColor = (PlayerColor)c;
            gameInfo.firstColor = serverPlayers[c].firstColor;
            serverPlayers[c].connection.GameStarted(gameInfo);
         }
   }
   sendControl.Resume();
}

void KickPlayer(int id)
{
   int c;
   for(c = 0; c<MaxPlayers; c++)
   {
      if(serverPlayers[c] && serverPlayers[c].id == id)
      {
         DCOMServerObject object = (DCOMServerObject)serverPlayers[c].connection._vTbl[-1];
         app.Unlock();
         object.serverSocket.Disconnect(0);
         app.Lock();
         delete serverPlayers[c];
      }
   }
}

void KickEveryoneOut()
{
   int c;
   for(c = 0; c<MaxPlayers; c++)
   {
      if(serverPlayers[c])
      {
         DCOMServerObject object = (DCOMServerObject)serverPlayers[c].connection._vTbl[-1];
         app.Unlock();
         object.serverSocket.Disconnect(0);
         app.Lock();
         delete serverPlayers[c];
      }
   }
}

void EndGame()
{
   if(serverGameStarted)
   {
      int c;
      for(c = 0; c<MaxPlayers; c++)
      {
         if(serverPlayers[c])
            serverPlayers[c].connection.GameEnded();
      }
      serverGameStarted = false;
   }
}

//////////////////////////////////////////
public remote class ServerConnection
{
public:
   // Remote Functions
   Player player;

   ~ServerConnection()
   {
      if(player)
      {
         delete serverPlayers[player.id];
         delete player;
         EndGame();
         panel.UpdateControlsStates();
         panel.ListPlayers();
      }
   }

   int Join()
   {
      int result = -1;
      if(!serverGameStarted)
      {
         int c;
         for(c = 0; c<MaxPlayers; c++)
         {
            if(!serverPlayers[c])
               break;
         }
         if(c < MaxPlayers)
         {
            player = serverPlayers[c] = Player { id = c };
            player.connection = this;
            incref player;
            incref serverPlayers[c];
            result = c;
         }
         panel.UpdateControlsStates();
         if(!panel.active)
            panel.Flash();
      }
      else
      {
         DCOMServerObject object = (DCOMServerObject)_vTbl[-1];
         object.serverSocket.Disconnect(0);
      }
      return result;
   }

   bool SetName(const String name)
   {
      if(player)
      {
         delete player.name;
         player.name = CopyString(name);
         panel.ListPlayers();
      }
      return true;
   }

   bool PlayPiece(int piece, int direction, bool flip, int bx, int by)
   {
      if(player &&
         (serverGameState.numPlayers == 1 || serverGameState.colorTurn == player.firstColor ||
         (serverGameState.numPlayers == 2 && serverGameState.colorTurn == player.firstColor + 2) ||
         (serverGameState.numPlayers == 3 && serverGameState.colorTurn == green && serverGameState.rotatingColor == player.firstColor)))
      {
         if(serverGameState.ValidMove(serverGameState.colorTurn, piece, direction, flip, bx, by))
         {
            int c;
            PlayerColor moveColor = serverGameState.colorTurn;
            sendControl.Stop();

            serverGameState.PlayMove(piece, direction, flip, bx, by);

            for(c = 0; c<MaxPlayers; c++)
               if(serverPlayers[c])
                  serverPlayers[c].connection.MovePlayed(moveColor, piece, direction, flip, bx, by);

            sendControl.Resume();

            if(serverGameState.over)
               panel.UpdateControlsStates();
            return true;
         }
      }
      return false;
   }

   bool Pass()
   {
      if(player &&
         (serverGameState.numPlayers == 1 || serverGameState.colorTurn == player.firstColor ||
         (serverGameState.numPlayers == 2 && serverGameState.colorTurn == player.firstColor + 2) ||
         (serverGameState.numPlayers == 3 && serverGameState.colorTurn == green && serverGameState.rotatingColor == player.firstColor)))
      {
         int c;
         PlayerColor moveColor = serverGameState.colorTurn;

         sendControl.Stop();

         serverGameState.Pass();

         for(c = 0; c<MaxPlayers; c++)
            if(serverPlayers[c])
               serverPlayers[c].connection.Passed(moveColor);
         sendControl.Resume();
         return true;
      }
      return false;
   }

   void SendMessage(const String msg)
   {
      int c;
      for(c = 0; c<MaxPlayers; c++)
         if(serverPlayers[c] && player != serverPlayers[c])
            serverPlayers[c].connection.NotifyMessage(player.name, msg);
   }

   virtual void MovePlayed(PlayerColor player, int pieceType, int direction, bool flip, int x, int y);
   virtual void Passed(PlayerColor player);
   virtual void GameStarted(const GameInfo gameInfo);
   virtual void GameEnded();
   virtual void NotifyMessage(const String name, const String msg);
}
