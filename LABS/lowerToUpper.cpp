#include <iostream>
using namespace std;

int main(){

  char lowercase;
  char uppercase;

  cout << "Enter a lowercase letter: " ;
  cin >> lowercase ;
  cout << endl ;

  uppercase = lowercase-32 ;

  cout << "The uppercase is " << uppercase << "." ;



  return 0;
}
