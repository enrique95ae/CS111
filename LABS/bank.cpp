#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
  
  fstream inputFile;
  ofstream outputFile;
  string name;
  int balance;
  int due;
  int remaining;

  inputFile.open("bank.txt");

  if(inputFile){

    outputFile.open("output.txt");

    while( inputFile >> name >> balance >> due ){

      remaining = balance - due ;
      outputFile << name << " " << remaining << endl ;

    }

    inputFile.close();
    outputFile.close();

  }else{

    cout << "ERROR: file could not be opened. Check if the file exists. " << endl ;

  }

  


  return 0;
}
