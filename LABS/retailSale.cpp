/*
Enrique Alonso Esposito
CS111
Lab3-1
13-9-16
*/

#include<iostream>
using namespace std;

int main(){
  
  double price;
  double rate;
  double taxtotal;
  double total;

  cout << "How much does the item cost? " ;
  cin >> price;
  cout << endl;

  cout << "How much is the tax? " ;
  cin >> rate;
  cout << endl;

  taxtotal=price*rate/100;
  total=price+taxtotal;

  cout << "The tax for this item is: " << taxtotal << endl;
  cout << "The total sale is: " << total << endl;

  return 0;
}
