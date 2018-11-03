#include <iostream>
using namespace std;

int main (){

  const int YARD = 36;
  const int FOOT = 12;
  int yards , feet, inches;


  cout << "Please enter a lenght in inches: " ;
  cin >> inches ;
  cout << endl ;

  yards = inches / YARD ;
  inches = inches % YARD ; 
  feet = inches / FOOT ; 
  inches = inches % FOOT ;

  cout << yards << " yards, " << feet << " feet and " << inches << " inches." << endl;
  cout << " Thank you for using the program. Good Bye." << endl;

  return 0;
}
