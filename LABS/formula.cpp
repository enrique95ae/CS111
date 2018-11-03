#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main(){

  int max=-1;
  int maxAux;
  int x=1;
  int z;
  double result=0;

  do{
  cout << "Enter a max: " ;
  cin >> max ;
  }while(max<=0);

  maxAux=max;

  //____________________________________________________________

  for(int i=1; i<=maxAux; max--, i++){
    result += i*(pow(5.0,(max)));
  }
      
  cout << "The THIRD FORMULA result is: " << result << endl ;
 
  result=0.0;
  max=maxAux;

  //_____________________________________________________________

  for(int i=1; i<=maxAux; max--, i++){
    x = x*i;
    result += x*(pow(5.0,max));
  }

  cout << "The FOURTH FORMULA result is: " << result << endl ;


  return 0;
}


