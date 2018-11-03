#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){

  string item;
  double price;
  double total;
  double tax;
  const double TAX = 10.00;

  cout << "Enter the item: " ;
  getline(cin, item);
  cout << endl;
 
  cout << "Enter the price: " ;
  cin >> price ;
  cout << endl ;

  cout << endl ;

  cout <<  "\"Macy's\"" << endl ; 
  
  cout << endl ;

  tax = (TAX*price)/100 ;
  total = price + tax ; 

  cout << left << setw(20) << item << right << "|" << right << setw(10) << fixed << setprecision(2)<< price << endl ;
  cout << left << setw(20) << "Sales Tax" << right << "|" << right << setw(10)<< tax << endl ;
  cout << left << setw(20) << "Total" << right << "|" << right << setw(10)<<total << endl ;



  return 0;
}
