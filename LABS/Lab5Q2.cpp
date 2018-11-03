#include <time.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

  
  int answer;
  int solution;
  int number1;
  int number2;


  srand(time(0));
  number1 = rand()%301;
  number2 = rand()%301;

  solution = number1 + number2 ;

  cout << "Add these two numbers: " << endl ;
  cout << number1 << endl ;
  cout << number2 << endl ;
  cout << "your answer is: " ;
  cin >> answer ;

  if(solution==answer){
    cout << "The solution is correct!" << endl;
  }else{
    cout << "The solution is incorrect!" << endl;
  }

  return 0;
}
