#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int roll, firstRoll, count, win=0;
  int loss;
  bool repeat=true;
  double probability=0;
  const long int NUM_GAMES = 100000;

  srand(time(NULL));
  for(count=1; count<=NUM_GAMES;count++)
    {
      repeat = true;
      firstRoll = (rand()%6+1) + (rand()%6+1);
      //cout << firstRoll << endl;
      if(firstRoll == 2 || firstRoll == 3 || firstRoll == 12)
        {
          //cout << "You lose!" << endl;
          repeat = false;
        }
      else if(firstRoll == 7 || firstRoll == 11)
        {
          //cout << "You win!" << endl;
          repeat = false;
          win+=1;
        }
      else
        {
 do
   {
     roll = (rand()%6+1) + (rand()%6+1);

     //cout << roll << endl;

     if(roll == 7)
       {
         //cout << "You lose!" << endl;
         repeat = false;
       }
     else if(roll == firstRoll)
       {
         //cout << "You win!" << endl;
         repeat = false;
         win+=1;
       }

   }while(repeat == true);
        }
    }
  probability = (static_cast<double>(win))/(static_cast<double>(NUM_GAMES));
  probability = probability*100;
  loss = NUM_GAMES - win ;
  cout << win << " games won out of " << NUM_GAMES << endl;
  cout << loss << " games lost out of " << NUM_GAMES << endl;
  cout << "The probability to win a game of craps is: " << probability << "%. " << endl;

  return 0;
}
