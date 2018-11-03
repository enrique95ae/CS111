//
//  main.cpp
//  HW9 - Question 3
//
//  Created by Enrique Alonso Esposito on 3/11/16.
//  Copyright © 2016 Enrique Alonso Esposito. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
    
    int n;
    int v=0;
    int aux;
    int aux2;
    bool base4=false;
    int lenght=0;
    int num[lenght];
    int base10=0;
    int newNum;
    int cont;
    
    while(base4==false){ //loop to check if the number is base 4. We split is as in HW9 Question 1 and then we check if each number is between 0-3
        if(v!=0){
            cout << "Enter a valid base 4 number!" << endl ;
        }
        cout << "Enter a number base 4: " ;
        cin >> n ;
        cout << endl ;
        v++;
        
        aux=n;
        aux2=n;
        
        while( aux !=0 ){ //Loop to check the leght of the number entered.
            lenght++;
            aux/=10;
        }
        
         //Array that will store the numbers of the interger. Need an array for later checking if the numbers are in the range 0-3
        
        
        for(int i=0; i<lenght ; i++){ //loop in which we store the las number of the interget in the array and we take it away from the variable number.
            num[i]=n%10; //storing the last number from the interger in the array.
            n=n/10; //Taking that alredy stored number away.

        }
        
 
        
        for(int i=0; i<lenght ; i++){
            if(num[i] == 0 || num[i] == 1 || num[i] == 2 || num[i] == 3){
                base4=true; //if is base 4 we get out of the validation loop and start the conversion.
            }else{
                base4=false;
            }
        }
    }
    
    cont=lenght;

    
    for(int i=cont-1; i>=0; i--){ //flipping the number (it was stored reversed in the array);

        num[i]=aux2%10; //storing the last number from the interger in the array.
        aux2=aux2/10; //Taking that alredy stored number away.
    }
    

    


    
    int x = lenght;
    x = x-1;
    
    for(int i=0; i<lenght ;x-- ,i++){
        if(x>=1){
            newNum = num[i]*pow(4, x);
            base10 = base10 + newNum;
        }
        
        if(x<1){
            newNum = num[i];
            base10 = base10 + newNum;
        }
        
    }
    

    cout << base10;
    

}
