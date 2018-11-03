#include <iostream>
using namespace std;

int option=0;
bool valid;
int lowerBound;
int upperBound;
bool validBounds;



void showMenu();

int main()
{
  
  do //Menu loop.
    {
      showMenu();
      cin >> option ;

      if(option<1||option>5){
	valid=false;
      }else{
	valid=true;
      }

      if(valid==false){
	cout << "Enter a valid option (1-6)!! " << endl ;
      }else{
	
	validBounds=false;

	do{
	  cout << "Enter the lower bound: " ;
	  cin >> lowerBound;
	  cout << endl << "Enter the upper bound: " ;
	  cin >> upperBound;
	  cout << endl ;

	  if(lowerBound>upperBound){
	    validBounds=false;
	  }else if(lowerBound<=0 || upperBound<=0){
	    validBounds=false;
	  }else{
	    validBounds=true;
	  }
	
	}while(validBounds==false);

	switch(option){
	case 1 :
	  cout << "These are the odd numbers between both bounds: " << endl ;
	  do{
	    if(lowerBound%2!=0){
	      cout << lowerBound << " " ;
		}
	    lowerBound++;
	  }while(lowerBound!=upperBound);
	  cout << endl ;
	    break;
	case 2 : 
	  cout << "These are the even numbers between both bounds: " << endl ;
	  do{
            if(lowerBound%2==0){
              cout << lowerBound << " " ;
	    }
            lowerBound++;
          }while(lowerBound!=upperBound);
          cout << endl ;
	    break;
	case 3 :
	  cout << "These are the multiples of 3 between both bounds: " << endl ; 
	  do{
	    if((lowerBound%3)==0){
	      cout << lowerBound << " " ;
	    }
	    lowerBound++;
	  }while(lowerBound!=upperBound);
	  cout << endl ;
	 break;
	case 4 :
	  cout << "These are the multiples of 4 between both bounds: " << endl ;
	  do{
	    if((lowerBound%4)==0){
	      cout << lowerBound << " " ;
	    }
	    lowerBound++;
	  }while(lowerBound!=upperBound);
	  cout << endl ;
	  break;
	case 5 :
	  cout << "These are the squares of all the odd numbers between the bounds: " << endl ;
	  do{
	    if((lowerBound%2)!=0){
	      cout << lowerBound*lowerBound << " " ;
	    }
	    lowerBound++;
	  }while(lowerBound!=upperBound);
	  cout << endl ;
	}	
      }

    }while(option!=6);

  return 0;
}


  void showMenu(){

    cout << "Sequence of numbers menu: " << endl ;
    cout << "--------------------------" << endl ;
    cout << "1. Odd numbers." << endl ;
    cout << "2. Even numbers." << endl ;
    cout << "3. Multiples of 3." << endl ;
    cout << "4. Multiples of 4." << endl ;
    cout << "5. Squares of odd numbers." << endl ;
    cout << "6. Quit." << endl ;
    cout << "7. Enter an option: " ;
  }
