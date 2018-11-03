#include <iostream>
#include <string>
using namespace std;

int main(){
  
  string month;
  int days;
  long int hours;
  long int minutes;

  cout << "Enter the current month: " ;
  getline(cin, month);

  if(month == "January" || month == "january" || month == "JANUARY"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "February" || month== "february" || month == "FEBRUARY"){
    days=28;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "March" || month== "march" || month == "MARCH"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "April" || month == "april" || month == "APRIL"){
    days=30;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "May" || month== "may" || month == "MAY"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "June" || month == "june" || month == "JUNE"){
    days=30;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "July" || month == "July" || month == "JULY"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "August" || month == "august" || month == "AUGUST"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "September" || month == "september" || month == "SEPTEMBER"){
    days=30;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "October" || month== "october" || month == "OCTOBER"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "November" || month == "november" || month == "FEBRUARY"){
    days=30;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else if(month == "December" || month == "december" || month == "DECEMBER"){
    days=31;
    hours=days*24;
    minutes=hours*60;
    cout << month << " has " << minutes << " minutes!" << endl ;
  }else{
    cout << "Invalid month!" << endl ;
  }
  return 0;
}
