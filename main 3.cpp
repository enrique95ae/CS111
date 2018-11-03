/*
 NAME: Enrique Alonso Esposito
 DATE: 10/11/2016
 Program Description: Math tutor menu
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

int main() {
    
    int option=0;
    int random1;
    int random2;
    int random3;
    int answer;
    int solution;
    
    srand(time(NULL));
    random1=rand()%101;
    random2=rand()%101;
    random3=rand()%101;
    
    
    do{ //Will show the menu as long as the variable "Option=0" (it is initialized to 0 and changed to 0 after every option but
        //quitting option
        
    //MENU
    cout << "Math Tutor Menu: " << endl ;
    cout << "----------------------------" << endl;
    cout << "1. Addition Problem. " << endl;
    cout << "2. Substraction Problem. " << endl ;
    cout << "3. Multiplication Problem. " << endl ;
    cout << "4. Division Problem. " << endl ;
    cout << "5. Quit this program. " << endl ;
    cout << "----------------" << endl ;
    cout << "Enter your choice: " ;
    cin >> option ;
    
    switch(option){
        case 1 : //ADITION
            
            do{
            
            cout << "Add the following numbers: " << endl ;
            cout << random1 << endl ;
            cout << random2 << endl ;
            cout << random3 << endl ;
            cout << "Answer: " ;
            cin >> answer ;
                
            solution=random1+random2+random3;
            
                if(answer!=solution){
                    cout << "Wrong, try again!" << endl ;
                }else{
                    cout << "Your answer is correct, congrats!" << endl;
                }
            
            }while(answer!=solution);
            
            option=0; //sets option to 0 so the menu is shown again after completing the do...while loop
            break;
        
        case 2 : //SUBSTRACTION
            
            do{
                
                cout << "Substract the following numbers: (in the same order they appear) " << endl ;
                cout << random1 << endl ;
                cout << random2 << endl ;
                cout << random3 << endl ;
                cout << "Answer: " ;
                cin >> answer ;
                
                solution=random1-random2-random3;
                
                if(answer!=solution){
                    cout << "Wrong, try again!" << endl ;
                }else{
                    cout << "Your answer is correct, congrats!" << endl;
                }
                
            }while(answer!=solution);
            
            option=0; //sets option to 0 so the menu is shown again after completing the do...while loop
            break;
            
        case 3 : //MULTIPLICATION
            
            do{
                
                cout << "Multiply the following numbers: " << endl ;
                cout << random1 << endl ;
                cout << random2 << endl ;
                cout << random3 << endl ;
                cout << "Answer: " ;
                cin >> answer ;
                
                solution=random1*random2*random3;
                
                if(answer!=solution){
                    cout << "Wrong, try again!" << endl ;
                }else{
                    cout << "Your answer is correct, congrats!" << endl;
                }
                
            }while(answer!=solution);
            
            option=0; //sets option to 0 so the menu is shown again after completing the do...while loop
            break;
            
        case 4 : //DIVISION
            
            do{
                
                cout << "Add the following numbers: " << endl ;
                cout << random1 << endl ;
                cout << random2 << endl ;
                cout << random3 << endl ;
                cout << "Answer: " ;
                cin >> answer ;
                
                solution=random1/random2/random3;
                
                if(answer!=solution){
                    cout << "Wrong, try again!" << endl ;
                }else{
                    cout << "Your answer is correct, congrats!" << endl;
                }
                
            }while(answer!=solution);
            
            option=0; //sets option to 0 so the menu is shown again after completing the do...while loop
            break;
            
        case 5 :
                cout << "Quitting!" << endl ;
            
            option = 1; //changes option into something different than 0 so it doens´t show the menu again and so ends the
                        //program
            break;
        }
    }while(option==0); //Will show the menu as long as option == 0
    return 0;
}
