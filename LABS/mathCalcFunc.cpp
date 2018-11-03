#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

void mixedSum();
void mixedAltSum();
double formula1(double, double);
double formula2(double, double);

int main(){

  int choice = 0 ;

  while(choice !=3){
    cout << "Mixed Sum Calculator Menu: " << endl ;
    cout << "   1. Mixed sum " << endl ;
    cout << "   2. Mixed alternate sum " << endl ;
    cout << "   3. Quit " << endl ;
    cout << "Enter your choice: " ;
    cin >> choice ;
    cout << endl ;


    switch(choice){
    case 1 : 
      mixedSum();
      break;
    case 2 :
      mixedAltSum();
      cout << "Case 2" << endl ;
      break;
    case 3:
      cout << "Quitting! " << endl ;
      break;
    }

  }

  


  return 0;
}

void mixedAltSum(){
  
  double  B, E;

  cout << "Enter the base: " ;
  cin >> B ;
  cout << endl ;
  cout << "Enter the exponent: " ;
  cin >> E ;
  cout << endl ;


  cout << "The result of the mixed alt sum of " << B << " and " << E << " is: " << formula2(B, E) << endl;


}


void mixedSum(){
  
  double  B, E;
  
  cout << "Enter the base: " ;
  cin >> B ;
  cout << endl ;
  cout << "Enter the exponent: " ;
  cin >> E ;
  cout << endl ;


  cout << "The result of the mixed sum of " << B << " and " << E << " is: " << formula1(B, E) << endl;

}

double formula1(double B, double E){
  double result=0.00;
  for(int i=1; i<=E; i++){
    result = result + 1/pow(B, i);
  }
  return result;
}
    
double formula2(double B, double E){
  double result=0.00;
  for(int i=1; i<=B; i++){
    result = result + 1/pow(i, E);
  }
  return result;
}
