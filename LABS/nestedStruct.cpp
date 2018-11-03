#include<iomanip>
#include<iostream>
#include<string>
const int SIZE = 5;
using namespace std;
struct address
{
  int number;
  string street;
  int apartment;
  string city;
};
struct Home
{
  int id;
  string owner;
  address aData;
  int price;
  int bedrooms;
  int bathrooms;
  int sellsYears[5];
};
Home homes[SIZE];




void fillArray()
{
  for (int k = 0; k < SIZE; k++)
        {
        homes[k].id = k + 1;
        cout << "Enter street number: ";
        cin >> homes[k].aData.number;
        cout << "Enter street name: ";
        cin >> homes[k].aData.street;
        cout << "Enter City: ";
        cin >> homes[k].aData.city;
        cout << "Enter owner name: ";
        cin >> homes[k].owner;
        cout << "Enter price: ";
        cin >> homes[k].price;
        cout << "Number of bedrooms? ";
        cin >> homes[k].bedrooms;
        cout << "Number of bathrooms? ";
        cin >> homes[k].bathrooms;
        cout << "Enter years of last five sales.";
        cin >> homes[k].sellsYears[0]
        >> homes[k].sellsYears[1]
        >> homes[k].sellsYears[2]
        >> homes[k].sellsYears[3]
        >> homes[k].sellsYears[4];




        }
}
void printSince14()
{
  int troo = 0;
  for (int k = 0; k < SIZE; k++)
        {
        troo = 0;
        for (int i = 0; troo =0 && i < 5; i++)
        {
        cin >> homes[k].aData.city;
        cout << "Enter owner name: ";
        cin >> homes[k].owner;
        cout << "Enter price: ";
        cin >> homes[k].price;
        cout << "Number of bedrooms? ";
        {
        if ((homes[k].sellsYears[i] > 2013)==1)
              {
                troo = 1;
                }
        if (troo == 1)
                {
                cout << "Stock Number is";
                cout << k + 1 << endl;
                cout << " street number: ";
                cout << homes[k].aData.number << endl;
                cout << "Street name: ";
                cout << homes[k].aData.street << endl;
                cout << " City: ";
                cout << homes[k].aData.city << endl;
                cout << "Owner name: ";
                cout << homes[k].owner << endl;
                cout << "Price: ";
                cout << homes[k].price << endl;
                cout << "Number of bedrooms: ";
                cout << homes[k].bedrooms << endl;
                cout << "Number of bathrooms: ";
                cout << homes[k].bathrooms << endl;
                }
        }
        }
        }
}


int search(int k)
{
  int tr = 0;
  for (int m = 0; tr = 0 && m < SIZE; m++)
        {
        if (homes[m].id == m+1)
        {
        cout << m + 1 << " is the index.";
        tr = 1;
        }
        }
        if (tr == 0)
        {
        cout << "Index not found.";
        }
}


int main()
{
        fillArray();
        printSince14();
        int key;


        cout << "What should we search?";
        cin >> key;
        search(key);
        return 0;
}
