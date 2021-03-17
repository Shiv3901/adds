#include <iostream>

using namespace std;

class Player
{

protected:

  string type;
  int rank;

public:

  virtual void printType()
  {
      cout<<"Calling Class Player, type is: general Player"<<endl;
  }

};


//class FootballPlayer: Derived from Player

class FootballPlayer: public  Player 
{

protected:

public:

  virtual void printRank()
  {
    cout<<"Calling Class FootballPlayer, Rank is: Football Player rank"<<endl;

  }  

  void printType()
  {
    cout<<"Calling Class FootballPlayer, type is: Football Player"<<endl;
  }
};

class MaleFootballPlayer: public FootballPlayer  
{
public:

  void printType()
  {
    cout<<"Calling Class MaleFootballPlayer, type is: Male Football Player"<<endl;
  }


  void printRank()
  {
    cout<<"Calling Class MaleFootballPlayer, Rank is: Male Plaer rank"<<endl;

  }

};

//class CricketPlayer: Derived from Player

class CricketPlayer: public Player
{

protected:

public:

  void printType()
  {
    cout<<"Calling Class CricketPlayer, type is: Cricket Player"<<endl;
  }
};


int  main(int argc, const char * argv[])
{

  FootballPlayer fbplayer;
  CricketPlayer crplayer;
  MaleFootballPlayer malefbplayer;


  FootballPlayer *fbplayerPtr;
  fbplayerPtr=&malefbplayer;
  fbplayerPtr->printType();


  return 0; 
}
