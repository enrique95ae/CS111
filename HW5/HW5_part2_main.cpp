/*
 NAME:  Enrique Alonso Esposito
 DATE: 09/27/2016
 ASSIGNMENT: HW5 Question 2
 Program Description:  The program ask for an operation, then generates 3 random numbers (0-100) and then waits 
 until the user enters the answer to show if it is correct or not.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
    
    char option;
    int number1;
    int number2;
    int number3;
    int solution; //actual solution
    int answer; //solution given by the user
    
    cout << "Enter the operation you want to practice (+,-,*,/,^): " ;
    cin >> option ;
    
    srand(time(0));
    number1 = 1+rand()%(100-1);
    number2 = 1+rand()%(100-1);
    number3 = 1+rand()%(100-1);
    
    
    
    if(option=='+'){
        cout << "You have entered: " << option << " solve it for the following numbers: " << endl ;
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
        cout << "Number 3: " << number3 << endl;
        cout << "Your answer is: " ;
        cin >> answer ;
        
        solution  = (number1+number2+number3);
        if (solution == answer){
            cout << "The solution is CORRECT! Good job!. " << endl ;
        }else{
            cout << "The solution is INCORRECT! " << endl ;
        }
    }else if(option == '-'){
        cout << "You have entered: " << option << " solve it for the following numbers: " << endl ;
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
        cout << "Number 3: " << number3 << endl;
        cout << "Your answer is: " ;
        cin >> answer ;
        
        solution  = (number1-number2-number3);
        if (solution == answer){
            cout << "The solution is CORRECT! Good job!. " << endl ;
        }else{
            cout << "The solution is INCORRECT! " << endl ;
        }
    }else if(option == '*'){
        cout << "You have entered: " << option << " solve it for the following numbers: " << endl ;
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
        cout << "Number 3: " << number3 << endl;
        cout << "Your answer is: " ;
        cin >> answer ;
        
        solution  = (number1*number2*number3);
        if (solution == answer){
            cout << "The solution is CORRECT! Good job!. " << endl ;
        }else{
            cout << "The solution is INCORRECT! " << endl ;
        }
    }else if(option == '/'){
        cout << "You have entered: " << option << " solve it for the following numbers: " << endl ;
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
        cout << "Number 3: " << number3 << endl;
        cout << "Your answer is: " ;
        cin >> answer ;
        
        solution  = (number1/number2/number3);
        if (solution == answer){
            cout << "The solution is CORRECT! Good job!. " << endl ;
        }else{
            cout << "The solution is INCORRECT! " << endl ;
        }
    }else if(option == '^'){
        cout << "You have entered: " << option << " solve it for the following numbers: " << endl ;
        cout << "Number 1: " << number1 << endl;
        cout << "Number 2: " << number2 << endl;
        cout << "Number 3: " << number3 << endl;
        cout << "Your answer is: " ;
        cin >> answer ;
        
        solution  = number1^number2^number3;
        if (solution == answer){
            cout << "The solution is CORRECT! Good job!. " << endl ;
        }else{
            cout << "The solution is INCORRECT! " << endl ;
        }
    }else{
        cout << "You have not entered a valid operation!" << endl ;
    }

    

    return 0;
}
