#include <iostream>
using namespace std;

int main(){
    
    //Declarations
    const int tax = 7;
    double p1 = 15.95;
    double p2 = 24.95;
    double p3 = 6.95;
    double p4 = 12.95;
    double p5 = 3.95;
    double totalSale = 0.0;
    double totalTax = 0.0;
    double totalSaleTax = 0.0;
    
    //Calculations
    totalSale = p1+p2+p3+p4+p5;
    totalTax = tax*totalSale/100;
    totalSaleTax = totalSale+totalTax;
    
    //Outputs
    cout << "The price of the first item is: " << p1 << endl;
    cout << "The price of the second item is: " << p2 << endl;
    cout << "The price of the third item is: " << p3 << endl;
    cout << "The price of the fourth item is: " << p4 << endl;
    cout << "The price of the fifth item is: " << p4 << endl;
    cout << "The total of the sale is: " << totalSale << endl;
    cout << "The tax total is: " << totalTax << endl;
    cout << "The total of the sale plus the taxes is: " << totalSaleTax << endl;
  
    return 0;
}

