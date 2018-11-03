#include <iostream>
#include <fstream>
using namespace std;


int main(){

  const int SIZE = 7 ;

  ifstream inputFile;
  ofstream outputFile;
  double exp = 0.00;
  double numbers[SIZE];

  inputFile.open("sevenGrades.txt");

  if(inputFile!){
    cout << "Error opening the file!" << endl ;
  }else{

    cout << "Enter the exp: " ;
    cin >> exp ;
    cout << endl ;
    
    for(int i = 0; i <SIZE; i++){
      

    }


  return 0;
}
