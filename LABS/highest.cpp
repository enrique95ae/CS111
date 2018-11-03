#include <iostream>
#include<stdio.h>
using namespace std;

void showProgInfo();
int getNum();
int findLargest(int, int, int);
int printResult(int);

int main()
{
 int num, num1, num2, num3, max;
 showProgInfo();

 num1 = getNum();
 num2 = getNum();
 num3 = getNum();

 max = findLargest(num1, num2, num3);

 printResult(max);
 return 0;
}

void showProgInfo()
{
 cout << "******************************************************************" << endl;
 cout << "FIND THE LARGEST NUMBER OUT OF THREE" << endl;
 cout << "******************************************************************" << endl;
}

int getNum()
{
 int num;
 cout << "Enter a number: ";
 cin >> num;

 return num;
}

int findLargest(int num1, int num2, int num3)
{
 int max = 0;
 if(num1>num2)
 max = num1;
 else
 max = num2;
 if(max<num3)
 max = num3;

 return max;
}

int printResult(int max)
{
 cout << "The largest number is " << max << endl;
}
