#include <iostream>
using namespace std;

int main(){

  int option;
  int hours;
  int salary;
  int temperature;

  cout << "MENU:" << endl ;
  cout << "-------------------------------" << endl ;
  cout << "1. Calculate salary. " << endl ;
  cout << "2. Verify temperature. " << endl ;
  cout << "3. Quit. " << endl ;
  cout << "Enter your option: " ;
  cin >> option ;
  cout << endl ;

  switch(option){
    case 1 : 
      cout << "Enter the amount of hours worked: " ;
      cin >> hours ;
      if(hours<0 || hours>80){
	cout << "The number is not valid!" << endl ;
      }else{
	salary = hours*12;
	cout << "Total to be paid: " << salary << endl ;
      }
      break ;
    case 2 :
      cout << "Enter the temperature: " ;
      cin >> temperature ;
      if(temperature<-50 || temperature>150){
	cout << "The temperature is NOT valid." << endl ;
      }else{
	if(temperature<0){
	  cout << "Very cold!" << endl ;
	}else if(temperature <60){
	  cout << "Cold!" << endl ;
	}else if(temperature <100){
	  cout << "Hot" << endl ;
	}else{
	  cout << "Very hot" << endl ;
	}
      }
      break ;
    case 3 :
      cout << "The program finishes here." << endl ;
      break ;

  return 0;
  }
}
