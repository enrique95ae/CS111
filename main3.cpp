/*
 NAME: Enrique Alonso Esposito
 DATE: 10/11/2016
 Program Description: Program that shows a menu and depending on the option chosen displays the answer of a geometric operation.
*/


#include <iostream>
using namespace std;

int main() {
    int option;
    int var1;
    int var2;
    float area;
    
    cout << "MENU: " << endl ;
    cout << "------------------------" << endl ;
    cout << "1. Calculate the area of a circle " << endl ;
    cout << "2. Calculate the area of a rectangle. " << endl ;
    cout << "3. Calculate the area of a triangle. " << endl ;
    cout << "4. Quit. " << endl ;
    cout << "Enter the option: " ;
    cin >> option ;
    cout << endl ;
    
    
    switch(option){
        case 1 :
            cout << "Enter the radius of the circle: " ;
            cin >> var1;
            area = 3.14159*var1*var1 ;
            cout << endl << "The area of the circle is: " << area << endl ;
            break;
            
        case 2 :
            cout << "Enter the lenght of the rectangle: " ;
            cin >> var1;
            cout << endl ;
            cout << "Enter the widht of the rectangle: " ;
            cin >> var2;
            area = var1*var2;
            cout << endl << "The area of the rectangle is: " << area << endl ;
            break ;
        
        case 3 :
            cout << "Enter the base of the triangle: " ;
            cin >> var1;
            cout << endl ;
            cout << "Enter the height of the triangle: " ;
            cin >> var2 ;
            area=(var1*var2)/2;
            cout << endl << "The area of the triangle is: " << area << endl;
            break;
            
        case 4 :
            cout << "Quitting!" << endl ;
            
    }

    return 0;
}
