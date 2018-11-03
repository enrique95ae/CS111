#include <iostream>
using namespace std;

int main(){

  int row;
  int row2;
  int row3;

  cout << endl << endl << endl;
  cout << "PROGRAM: " << endl;


  cout << "Enter the number of rows: " ;
  cin >> row;


  cout << endl << endl << endl;
  cout << "Patern 2: " << endl;
  cout << "___________________" << endl;

  for(int i=0; i<=row; i++){
  
    for(int x=0; x<=i-1; x++){
      
      cout << x+1  ;

    }
    cout << endl ;
  }

  cout << endl << endl << endl;
  cout << "Patern 3: " << endl;
  cout << "___________________" << endl;

  row2=row;

  for(int z=0; z<=row; z++){
    
    for(int y=1; y<=row2; y++){
      
      cout << y ;

    }
    cout << endl ;
    row2=row2-1;
  }


  cout << endl << endl << endl;
  cout << "Patern 5: " << endl;
  cout << "___________________" << endl;

  row3=row;

  for(int d=1; d<=row; d++){
    
    for(int f=row; f>= d; f--){
      cout << f;
    }
    cout << endl ;
  }

  return 0;
}
