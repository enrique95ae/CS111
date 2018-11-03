#include <iostream>
#include <fstream>
using namespace std;

int main(){

  const int SIZE = 5;

  ifstream inputFile;
  ofstream outputFile;
  int highest = 0 ;
  int array[SIZE];

  inputFile.open("Lab12input.txt");

  if(!inputFile){
    cout << "ERROR opening the file!" << endl ;
  }else{
    for(int i = 0; i < SIZE; i++){
      inputFile >> array[i];
    }
    inputFile.close();

    for(int i = 0; i < SIZE ; i++){
      if(array[i] >= highest){
        highest = array[i];
      }
    }

    for(int i = 0; i < SIZE ; i++){
      array[i] = array[i] * 2 ;
    }


    outputFile.open("Lab12output.txt");

    outputFile << "The highest number is: " << highest << endl << endl;
    outputFile << "The new numbers in the array are: " ;

    for(int i = 0; i < SIZE; i++){
      outputFile << " " << array[i] ;
    }
  }

  return 0;
}

