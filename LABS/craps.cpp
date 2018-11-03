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

  srand(time(NULL));
  dice1 = rand()%6+1;
  dice2 = rand()%6+1;
  firstRoll = dice1 + dice2 ;

  cout << "FIRST ROLL: " << "Dice one roll: " << dice1 << ". Dice two roll: " << dice2 << "." << endl;
  cout << "Total Roll: " << firstRoll << endl ;

  if(firstRoll==7 || firstRoll==11){
    cout << "Win!" << endl ;
  }else if(firstRoll==2 || firstRoll==3 || firstRoll==12){
    cout << "Lose!" << endl ;
  }else{
    cout  << "Keep rolling! " << endl ;
    do{
      dice1 = rand()%6+1;
      dice2 = rand()%6+1;
      nextRoll = dice1 + dice2;
      cout << "Dice one roll: " << dice1 << ". Dice two roll: " << dice2 << "." << endl;
      cout << "Total Roll: " << nextRoll << " so you: " ; 
      if(nextRoll == 7){
	cout << "Lose!" << endl ;
        playing=false;
      }else if(nextRoll == firstRoll){
	cout << "Win!" << endl;
	playing=false;
      }else{
	cout << " keep rolling! " << endl ;
      }
    }while(playing==true);
   }
  return 0;
}
