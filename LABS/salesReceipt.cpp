#include <iostream>
#include <string>

using namespace std;

string name;
int quantity;
int price;
int counter=0;

int main()
{
  do{
      cout << "Enter the name of the item: " ;
      getline(cin, name);
      cout << endl << "Enter the quantity: " ;
      cin >> quantity ;
      cout << endl << "Enter the price per unit: " ;
      cin >> price ;

    }while(quantity!=-99);


}
