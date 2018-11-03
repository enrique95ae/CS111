/*
 NAME: Enrique Alonso Esposito
 DATE: 10/04/2016
 Program Description: Input the name of three runners and their fnish time and then displays the name of the runners in order.
*/
 
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    
    int time1=0;
    int time2=0;
    int time3=0;

    int first;
    int second;
    int third;

    string name1;
    string name2;
    string name3;

    
    //RUNNER 1
    cout << "Enter the name of the first runner: " ;
    getline(cin, name1);
    cout << endl ;

    cout << "Enter the time of the runner: " ;
    cin >> time1 ;
    cout << endl ;
        if(time1<=0)
            cout << "Enter a valid time!" << endl ;

    //RUNNER 2
    cout << "Enter the name of the second runner: " ;
    getline(cin, name2);
    getline(cin, name2); //fix
    cout << endl ;
    

    cout << "Enter the time of the runner: " ;
    cin >> time2 ;
    cout << endl ;
        if(time2<=0)
            cout << "Enter a valid time!" << endl ;

    
    //RUNNER 3
    cout << "Enter the name of the third runner: " ;
    getline(cin, name3);
    getline(cin, name3); //fix
    cout << endl ;
    

    cout << "Enter the time of the runner: " ;
    cin >> time3 ;
    cout << endl ;
        if(time3<=0)
            cout << "Enter a valid time!" << endl ;
    

    //PUTTING NAMES AND TIMES IN ORDER: (FIRST, SECOND AND THIRD)
    
    //All the possible scenarios in which runner1 is the winner.
    if(time1<time2){
        if(time1<time3){
            first=time1;
            cout << "First place: " << name1 << " with a time of: " << first << " minutes!" << endl ;
            if(time2<time3){
                second=time2;
                third=time3;
                cout << "Second place: " << name2 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name3 << " with a time of: " << third << " minutes!" << endl ;
            }else{
                second=time3;
                third=time2;
                cout << "Second place: " << name3 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name2 << " with a time of: " << third << " minutes!" << endl ;
            }
        }else{  //MAY NOT WORK, ALREADY CHECKED
            first=time3;
            cout << "First place: " << name3 << " with a time of: " << first << " minutes!" << endl ;
            if(time1<time2){
                second=time1;
                third=time2;
                cout << "Second place: " << name1 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name2 << " with a time of: " << third << " minutes!" << endl ;
            }else{
                second=time2;
                third=time1;
                cout << "Second place: " << name2 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name1 << " with a time of: " << third << " minutes!" << endl ;
            }
        }
    //All the possible scenarios in which runner3 is the winner.
    }else if(time3<time1){
        if(time3<time2){
            first=time3;
            cout << "First place: " << name3 << " with a time of: " << first << " minutes!" << endl ;
            if(time1<time2){
                second=time1;
                third=time2;
                cout << "Second place: " << name1 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name2 << " with a time of: " << third << " minutes!" << endl ;
            }else{
                second=time2;
                third=time1;
                cout << "Second place: " << name2 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name1 << " with a time of: " << third << " minutes!" << endl ;
            }
        }
    //All the possible scenarios in which runner2 is the winner.
    }else{
        if(time2<time3){
            first=time2;
            cout << "First place: " << name2 << " with a time of: " << first << " minutes!" << endl ;
            if(time1<time3){
                second=time1;
                third=time3;
                cout << "Second place: " << name1 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name3 << " with a time of: " << third << " minutes!" << endl ;
            }else{
                second=time3;
                third=time1;
                cout << "Second place: " << name3 << " with a time of: " << second << " minutes!" << endl ;
                cout << "Third place: " << name1 << " with a time of: " << third << " minutes!" << endl ;
            }
        }
    }


    return 0;
}
