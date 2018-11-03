#include <iostream>
using namespace std;

int main(){

  char grade;
  bool pass = false ;

  cout << "Enter your grade(A,B,C,D,F): " ;
  cin >> grade ;
  cout << endl ;

  if(grade == 'A'){  
    cout << "Grade: A - Excellent" << endl ;
    pass = true ;
  }else if(grade == 'B' ){
    cout << "Grade: B - Good" << endl ;
    pass = true ;
  }else if(grade == 'C' ){
    cout << "Grade: C - Ok" << endl ;
    pass = true ;
  }else if(grade == 'D' ){
    cout << "Grade: D - Work harder! " << endl ;
  }else if(grade == 'F' ){
    cout << "Grade: F - Failed! " << endl ;
  }else{
    cout << "Invalide grade! " << endl ;
  }

  if(pass == true){
    cout << "Congratulations!" << endl ;
  }


  return 0;
}
