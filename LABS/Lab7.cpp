#include <iostream>
using namespace std;

int main(){
  
  int number;
  char answer;
  int even=0;
  int odd=0;
  double average=0.00;
  bool checked=true;
  double  total=0.00;

  cout << "Do you have a number to check? (y or n)" ;
  cin >> answer ;
  cout << endl ;

  if(answer=='y' || answer=='Y'){
    do{
      cout << "Enter the number you want to check: " ;
      cin >> number ;
      cout << endl ;
      total=total+number;
     if(number%2==0){
	cout << number << " is even!" << endl ;
	even++;
      }else{
	cout << number << " is odd!" << endl ;
	odd++;
      }
      cout << "Do you want to check another number? (y or n)" ;
      cin >> answer ;
    }while(answer=='y' || answer=='Y');
  }else{
    checked=false;
  }
	average = total/(even+odd);
	if(checked==false){
	  cout << "No numbers were checked!" << endl ;
	}else{
	  cout << even << " even numbers." << endl ;
	  cout << odd << " odd numbers." << endl ;
	  cout << "The average is: " << average << endl ;
	}
  return 0;
}
