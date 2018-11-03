#include <iostream>
using namespace std;

int main(){

  int hours;
  int minutes;
  double minuteHand;
  double hourHandMinutes;
  double hourHand;
  double hourHandHours;

  cout << "Enter the hour: " ;
  cin >> hours ;
  cout << endl;
  cout << "Enter the minutes: " ; 
  cin >> minutes ;
  cout << endl ;

  hours = hours % 12 ;

  hourHandHours = hours*30.0 ;
  minuteHand = minutes*6.0;
  hourHandMinutes = minutes*0.5;
  hourHand = hourHandMinutes + hourHandHours ;

  cout << "Hours degrees: "  << hourHand << endl  ;
  cout << "Minutes degrees: " << minuteHand << endl ;

  return 0;
}
