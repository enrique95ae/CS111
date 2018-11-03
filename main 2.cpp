/*
 NAME: Enrique Alonso Esposito
 DATE: 10/10/2016
 Program Description: The program generates a number between 1 and 100 and then asks the user to guess. The program will keep asking until the right guess is entered.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main() {
    
    int random;
    int guess;
    
    srand(time(NULL));
    random = rand()%101;
    
    cout << "Try to guess a number between 1 and 100: " ;
    
    do{
        cin >> guess ;
        if(guess < random){
            cout << "Too low, try again!" << endl ;
            cout << "Enter a number: " ;
        }else if(guess > random){
            cout << "Too high, try again!" << endl ;
            cout << "Enter a number: " ;
        }else{
            cout << "Congrats! Your guess is correct!" << endl ;
        }
    }while(guess!=random);
    
    

    return 0;
}
