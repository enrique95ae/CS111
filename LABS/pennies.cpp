#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double pay=0.01;
  int days=0;
  double total=0.00;

  do{

    cout << "Enter the number of days you worked: " ;
    cin >> days ;

  }while(days<=0);

  for(int x=0; x<days; x++){
    
    total=total+pay;
    cout << right << setw(10) << x+1 << right << setw(10) << pay << endl ;
    pay=pay*2;
    
  }

  cout << endl ;
  cout << right << setw(10) << "Total: " << right << setw(10) << total << endl ;

  return 0;
}
