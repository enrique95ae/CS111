#include <iostream>
using namespace std;

int main() {

    //constants
    const double stateTax = 0.04;
    const double countyTax = 0.02;
    
    
    //variables
    string month;
    double totalCollected;
    double salesAmount;
    double stateSaleTax;
    double countySaleTax;
    double totalSaleTax;
    
    cout << "Month: " ;
    cin >> month ;
    cout << endl ;
    
    cout << "How much was collected during this month: " ;
    cin >> totalCollected;
    cout << endl ;
    cout << endl ;
    cout << "--------------------------------------------" << endl;
    
    //calculations
    salesAmount = totalCollected / (1+stateTax+countyTax) ;
    stateSaleTax = salesAmount*stateTax;
    countySaleTax = salesAmount*countyTax;
    totalSaleTax = stateSaleTax+countySaleTax;
    
    //outputs
    cout << "Month: " << month << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Total sales collected:        " << totalCollected << endl;
    cout << "Sales:                        " << salesAmount << endl;
    cout << "County Sales Tax:             " << countySaleTax <<  endl;
    cout << "States Sales Tax:             " << stateSaleTax << endl;
    cout << "Total Sales Tax:              " << totalSaleTax << endl;
    
    
    
    
    return 0;
}
