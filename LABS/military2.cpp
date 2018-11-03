#include <iostream>
#include <string>
using namespace std;

void getInfo(string& name, int& age, char& gender);
bool verifyEligibility(int, char);
void printLetter(bool, string);


int main(){

  string name;
  int age;
  bool elegible = false ;
  char gender;

  getInfo(name, age, gender);
  elegible =  verifyEligibility(age, gender);
  printLetter(elegible, name);
  

  //cout << name << " " << age << " " << gender << " " << endl ;

  return 0;
}

void getInfo(string& name, int& age, char& gender){
  
  cout << "Enter the name: " ;
  cin >> name ;
  cout << endl << "Enter the age: " ;
  cin >> age ;
  cout << endl << "Enter the gender (m/f): " ;
  cin >> gender ;
  cout << endl ;

}

bool verifyEligibility(int age, char gender){
  
  if(gender == 'm'){
    if(age>=18){
      return true;
    }else{
      return false;
    }
  }else{
    return false;
  }

}

void printLetter(bool elegible, string name){
  
  if(elegible){
    cout << "Dear " << name << " please join the military." << endl ;
  }else{
    cout << "Thank you for applying." << endl ;
  }
}

