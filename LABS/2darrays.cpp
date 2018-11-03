#include<iostream>
#include<fstream>
using namespace std;

const int ROW = 5, COL = 3;
void fillArray(double grades[][COL])
{
  ifstream inFile;
  inFile.open("2dinput.txt");
  for(int k=0; k<ROW; k++){
          for(int c=0; c<COL; c++){
        inFile >> grades[k][c];
        }
  }
  inFile.close();
}

void higherThan90(double grades[][COL])
{
  double average[ROW];

  double add;

  for(int k=0; k<ROW; k++) {
        for (int c=0; c<COL; c++){
           add+= grades[k][c];
        }
      average[k]=add/3.0;
        add=0;
  }

  ofstream outFile;
  outFile.open("2doutput.txt");

  for(int k=0; k<ROW; k++) {
      if (average[k] >= 90){
        for (int c=0; c<COL; c++){
          outFile << grades[k][c]<< " ";
        }
          outFile << average[k] << endl;
      }
  }
}

int main()
{
  double grades[ROW][COL];
  fillArray(grades);
  higherThan90(grades);

}


