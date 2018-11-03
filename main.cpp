/*
 NAME: Enrique Alonso Esposito
 DATE: 10/11/2016
 Program description:
*/

#include <iostream>
using namespace std;

int main() {
    
    int number;
    int biggest=0;
    int smallest=50;

    
    for(int i=0;i<100;i++){
        cout << "Enter a number: " ;
        cin >> number ;
        cout << endl;
        if(i==0){
            smallest = number;
        }
        if(number>=0){
            if(number>biggest){
                biggest=number;
            }else if(number<smallest){
                smallest=number;
            }
        }else{
            cout << "Negatives not considered" << endl ;
        }
    }
    
    cout << "The largest number is: " << biggest << endl ;
    cout << "The smallest number is: " << smallest << endl ;

    return 0;
}
