#include <iostream>
using namespace std;

int main(){
  int age;
  int waitYears;
  char gender;

    cout << "Enter your gender: " ;
    cin >> gender ;
    cout << endl ;

      if(gender=='f' || gender=='F'){
	cout << "Thank you for using the system, but we were only looking for men." << endl ;
      }else if(gender=='m' || gender=='M'){
	cout << "Enter your age: " ;
	cin >> age ;
	cout << endl ;
	if(age<=0){
	  cout << "Invalid age!" << endl ;
	}else if(age>0 && age<=16){
	  waitYears=17-age;
	  cout << "You need to wait " << waitYears << " years! " << endl;
	}else if(16<age && age<43){
	  cout << "The military is hiring people like you! " << endl ;
	}else{
	  cout << "Thank you for using the system!" << endl ;
	}
      }else{
	cout << "Invalid gender!" << endl ;
    }
  return 0;
}
