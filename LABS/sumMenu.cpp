#include <iostream>
using namespace std;

int main(){

  int result=0;
  int option=0;

  cout << "Sum of numbers menu: " << endl ;
  cout << "1. Sum of odd numbers. " << endl ;
  cout << "2. Sum of even numbers. " << endl ;
  cout << "3. Sum of multiples of 3 to the power of 5. " << endl ;
  cout << "4. Sum of one over multiples of 4. " << endl ;
  cout << "5. Quit. " << endl ;


  do{

    cout << "Enter an option: ";
    cin >> option ;

    if(option<=0 || option>=6){
      cout << "Enter a valid option! " << endl ;
    }

  }while(option<=0 || option>=6);

  switch(option){
    case 1 :
      for(int x=25; x<=40; x++){
	if(x%2!=0){
	  cout << x ;
	}
	if(x<40){
	  
	}



  return 0;
}
