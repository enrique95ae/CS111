#include <iostream>
using namespace std;

int main() {
    
    //CONSTATNS DECLARATION
    const double adultPrice = 10.00;
    const double childPrice = 6.00;
    const double rate = 20.00;
    
    //VARIABLES DECLARATION
    int adults;
    int child;
    string movieName;
    double grossProfit;
    double netProfit;
    double distributorProfit;
    
    //INPUTS
    cout << "Name of the movie: " ;
    cin >> movieName;
    cout << endl;
    
    cout << "How many adults watched the movie: " ;
    cin >> adults;
    cout << endl;
    
    cout << "How many kids watched the movie: " ;
    cin >> child;
    cout << endl;
    
    //CALCULATIONS
    grossProfit = adults*adultPrice + child*childPrice;
    netProfit = rate*grossProfit/100;
    distributorProfit = grossProfit-netProfit;
    
    //OUTPUTS
    cout << "Movie Name:                   " << movieName << endl;
    cout << "Adult tickets sold:           " << adults << endl;
    cout << "Child tickets sold:           " << child << endl;
    cout << "Gross box office profit:      " << grossProfit << endl;
    cout << "Net box office profit:        " << netProfit << endl;
    cout << "Amount paid to dristributor:  " << distributorProfit << endl;
    
    
    return 0;
}
