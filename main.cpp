/*
 NAME:   Enrique Alonso Esposito
 DATE:   09/27/2016
 HOMEWORK: HW5 Question 1
 Program description: Mobile provider. Calculating the clients bill depending on their plan and the amount of minutes used.
*/


#include <iostream>
using namespace std;

int main(){
    
    char option;
    int minutes;
    int extraMinutes;
    double total;
    
    cout << "Which plan does the client have (A,B,C or D): " ;
    cin >> option ;
    cout << endl ;
    
    cout << "How many minutes were used: " ;
    cin >> minutes;
    cout << endl ;
    
    if(option=='A'){
        cout << "The client has the plan: " << option << " and has used " << minutes << " minutes, which makes a total of: " ;
        if (minutes <= 450){
            total = 39.99 ;
            cout << total << " Dollars." << endl ;
        }else{
            extraMinutes=minutes-450;
            total = 39.99 + (extraMinutes*0.45);
            cout << total << " Dollars." << endl ;
        }

        
    }else if(option == 'B'){
        cout << "The client has the plan: " << option << " and has used " << minutes << " minutes, which makes a total of: " ;
        if (minutes <= 900){
            total = 49.99 ;
            cout << total << " Dollars." << endl ;
        }else{
            extraMinutes=minutes-900;
            total = 49.99 + (extraMinutes*0.40);
            cout << total << " Dollars." << endl ;
        }
        
    }else if(option == 'C'){
        cout << "The client has the plan: " << option << " and has used " << minutes << " minutes, which makes a total of: " ;
        if (minutes <= 1200){
            total = 59.99 ;
            cout << total << " Dollars." << endl ;
        }else{
            extraMinutes=minutes-1200;
            total = 59.99 + (extraMinutes*0.35);
            cout << total << " Dollars." << endl ;
        }
    }else if(option == 'D'){
        total = 69.99 ;
        cout << "The client has the plan: " << option << " and has UNLIMITED MINUTES. The total is: " ;
        cout << total << " Dollars." << endl;
    }

    return 0;
}
