#include <iomanip>
#include <iostream>
#include <fstream>
const int SIZE = 5;
using namespace std;


void higherThanAvg(string a[], double g[], int s)
{
  double total, average;
  for (int k = 0; k < SIZE; k++)
    {
      total+=g[k];
    }
  average = total / 5.0;
  ofstream outFile;
  outFile.open("output.txt");
         for (int k = 0; k < SIZE; k++)
		  {
		      if (g[k] > average)
		     	     {
		      	       outFile << a[k] << " " << g[k] << endl;
		       	     }
		   }
  outFile.close();
}


int main()
{
  string names[SIZE];
  double grades[SIZE];
  ifstream inFile;
  inFile.open("painput.txt");
  for (int k = 0; k < SIZE; k++)
    {
      inFile >> names[k] >> grades[k];
    }
  inFile.close();
  higherThanAvg(names, grades, SIZE);
  return 0;
}
