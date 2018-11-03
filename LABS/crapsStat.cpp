#include <iostream>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
  const int NUM_GAMES=100000;
  int dice1;
  int dice2;
  int firstRoll;
  int nextRoll;
  int playing=true;
  int win=0;
  int loss=0;
  double avgWin=0.0;
  double avgLoss=0.0;
  int played=0;

  for(int i=0; i<NUM_GAMES; i++){


  srand(time(NULL));
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  firstRoll = dice1 + dice2 ;

  cout << "FIRST ROLL: " << "Dice one roll: " << dice1 << ". Dice two roll: " << dice2 << "." << endl;
  cout << "Total Roll: " << firstRoll << endl ;

  if(firstRoll==7 || firstRoll==11){
    cout << "Win!" << endl ;
    win++;
    played++;
  }else if(firstRoll==2 || firstRoll==3 || firstRoll==12){
    cout << "Lose!" << endl ;
    loss++;
    played++;
  }else{
    cout  << "Keep rolling! " << endl ;
    played++;
    do{
      //      srand(time(NULL));
      // dice1 = rand()%6+1;
      // dice2 = rand()%6+1;
      nextRoll = dice1 + dice2;
      cout << "Dice one roll: " << dice1 << ". Dice two roll: " << dice2 << "." << endl;
      cout << "Total Roll: " << nextRoll << " so you: " ; 
      if(nextRoll == 7){
	cout << "Lose!" << endl ;
        playing=false;
	loss++;
	
      }else if(nextRoll == firstRoll){
	cout << "Win!" << endl;
	playing=false;
	win++;
      }else{
	cout << " keep rolling! " << endl ;
      }
    }while(playing==true);
   }
  played++;
  }

  avgWin=(win*100)/played;
  avgLoss=(loss*100)/played;

  cout << "Win% : " << avgWin << endl ;
  cout << "Lose% : " << avgLoss << endl ;


  return 0;
}
