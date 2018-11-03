/*
 NAME: Enrique Alonso Esposito
 DATE: 10/18/2016
 Program Description: Loop that generates 10 random intergers and calculates the sum, average, greatest and smallest
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int number;
int greatest=0;
int smallest=101;
double average=0.0;
int sum=0;

int main() {
    
    srand(time(NULL));
    for(int count=0; count < 10; count++){
        
        number=rand()%101;
        sum=sum+number;
        
        if(number>=greatest){
            greatest=number;
        }
        
        if(number<=smallest){
            smallest=number;
        }
        
        average=sum/(count+1); //Because counter starts at 0.
        
        cout << "The random number is: " << number << endl;
        cout << "The sum of all the numbers is: " << sum << endl;
        cout << "The average of all the numbers is: " << average << endl ;
        cout << "----------------------------------------" << endl ;
        
    }
    
    cout << endl << endl << "SUMMARY: " << endl ;
    cout << "The sum of all the numbers is: " << sum << endl;
    cout << "The average of all the numbers is: " << average << endl ;
    cout << "The greatest is: " << greatest << endl ;
    cout << "The smallest is: " << smallest << endl ;
    
    return 0;
}
