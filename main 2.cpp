/*
 NAME: Enrique Alonso Esposito
 DATE: 10/27/2016
 Program Description: Fibbonacci sequence. Showing the first X numbers of the seqeunce. X entered by the user.
*/

#include <iostream>
using namespace std;

int main()
{
    int f1 = 1;
    int f2 = 2;
    int nextTerm = 0;
    int n = -1;
    
    do{
    cout << "Enter a positive number: ";
    cin >> n;
    }while(n<0);
    
    cout << "Fibonacci Series: " << f1 << ", " << f2 << ", ";
    
    nextTerm = f1 + f2;
    
    for(int i = 0 ; i<n-2; i++){ //i<n-2 since we always print 1 and 2 before the loop and the also count.
        nextTerm = f1 + f2;
        cout << nextTerm << ", ";
        f1 = f2;
        f2 = nextTerm;
    }
    

    return 0;
}
