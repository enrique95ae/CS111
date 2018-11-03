/*
 NAME: Enrique ALonso Esposito  
 DATE: 10/18/2016
 Program Description: Creating a sales receipt that asks for an item, a quantity and a price until the user enters -99. At the end the program prints the receipt.
*/

#include <iostream>
#include <string>

using namespace std;

int i=0; //counter
string name[100];
int quantity[100];
double linePrice=0.0;
double price[100];
double subTotal=0.0;
double saleTax;
double total=0.0;


int main() {
    
    do{
        cout << "Enter the item: " ;
        getline(cin, name[i]);
        cout << name[i];
        do{
        cout << endl << "Enter the quantity: " ;
        cin >> quantity[i] ;
        }while((quantity[i]<0 || quantity[i]>25) && quantity[i]!=-99);
        if(quantity[i]!=-99){
        cout << endl << "Enter the price: " ;
        cin >> price[i] ;
        }
        cin.ignore();
        if(quantity[i]==-99){
            break;
        }
        i++;
        
    }while(quantity[i]!=-99);
    
    cout << "Sales recepit: " << endl ;
    cout << "Number \tName \tQuantity \tUnit Price \tLine Total" << endl ;
    cout << "---------------------------------------------------------------" << endl ;

    for(int x=0; x<=i-1; x++){
        linePrice=quantity[x]*price[x];
        cout << x+1 << "\t\t" << name[x] << "\t\t\t" << quantity[x] << "\t\t\t" << price[x] << "\t\t\t" << linePrice << endl ;
        subTotal=subTotal+linePrice;
    }
    saleTax=subTotal*12/100;
    total=subTotal+saleTax;
    cout << "                                        Subtotal:      " << subTotal << endl ;
    cout << "                                        Sale Tax:      " << subTotal*12/100 << endl;
    cout << "                                        Total   :      " << total << endl ;
    
    return 0;
}
