/*
    NAME: Enrique Alonso Esposito
    DATE: 10/04/2016
    Pogram description: Program ask for the number of items sold and the outputs the total of the sale
*/

#include <iostream>
using namespace std;

int main(){
    const double UNIT_PRICE = 99.0 ;
    int numSold = 0;
    double totalSale;
    
    do{ //INPUT VALIDATION (NUM OF UNITS GREATER THAN 0)
        cout << "Enter the number of packages sold: " ;
        cin >> numSold ;
        cout << endl ;
    }while(numSold <= 0);
    
    if(numSold<=9){
        totalSale=numSold*UNIT_PRICE;
        cout << "The total of the purchase is: $" << totalSale << endl ;
    }else if(numSold>=10 && numSold<20){
        totalSale=numSold*UNIT_PRICE*0.20;
        cout << "The total of the purchase is: $" << totalSale << endl ;
    }else if(numSold>=20 && numSold<50){
        totalSale=numSold*UNIT_PRICE*0.30;
        cout << "The total of the purchase is: $" << totalSale << endl ;
    }else if(numSold>=50 && numSold<100){
        totalSale=numSold*UNIT_PRICE*0.40;
        cout << "The total of the purchase is: $" << totalSale << endl ;
    }else if(numSold>=100){
        totalSale=numSold*UNIT_PRICE*0.50;
        cout << "The total of the purchase is: $" << totalSale << endl ;
    }
    
    return 0;
}
