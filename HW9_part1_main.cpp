/*
 Name: Enrique Alonso Esposito
 Date: 10/27/2016
 Program Description: User enters an interger and the program prints the same interger flipped and spplited.
*/

#include <iostream>
using namespace std;

int main() {
    
    int number=0; //The number entered by the user
    int lenght=0; //The lenght of that number
    int aux; //We copy the number here so we don´t change ´number´value (we will use it)
    
    cout << "Enter a number to flip: " ;
    cin>> number;
    
    aux=number; //copying it
    
    while( aux !=0 ){ //Loop to check the leght of the number entered.
        lenght++;
        aux/=10;
    }
    
    
    cout << endl << "The number flipped and spplited: " << endl;
    
    int newNum[lenght]; //Array that will store the numbers of the interger. Need an array for later printting the numbers in order and separately.
    

    for(int i=0; i<lenght ; i++){ //loop in which we store the las number of the interget in the array and we take it away from the variable number.
        newNum[i]=number%10; //storing the last number from the interger in the array.
        number=number/10; //Taking that alredy stored number away.
    }
    
    for(int i=0; i<lenght; i++){
        cout << newNum[i] << " " ; //Printting the numbers (already flipped)
    }
    
    cout << endl ;
    
    return 0;
}
