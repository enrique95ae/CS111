/*
 NAME: Enrique Alonso Esposito
 DATE: 10/29/2016
 Program Description: Creating the given pattern.
*/

//////
//TO FIX:
//LAST LINE THE PROGRAM SKIPS THE LAST NUMBER
//////


#include <iostream>
using namespace std;

int main() {
    
    int aux;

    for(int i=6; i>=1; i--){
        
        for(int x=1; x<i; x++){
            cout << "*" ;
            aux=x;
        }
        
        for(int j=1; j<=6; j++){
                if(aux+j>6)
                    break;

                cout << j ;
     
        }
        
        
        
        cout << endl ;
    }
    
    cout << endl ;
    
    return 0;
}
