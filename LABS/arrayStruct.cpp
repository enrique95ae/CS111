#include <iomanip>
#include <iostream>
using namespace std;
struct Home
{
  string owner;
  int price, bed, bath;
};

int main()
{
  const int NUMHomes = 5;
  Home homes[NUMHomes];
  for (int count = 0; count < NUMHomes; count++)
    {
      cout << "Enter home " << count + 1 << "'s owner." << endl;
      cin >> homes[count].owner;
      cout << "Enter home " << count + 1 << "'s price." << endl;
      cin >> homes[count].price;
      cout << "Enter home " << count + 1 << "'s bedrooms." << endl;
      cin >> homes[count].bed;
      cout << "Enter home " << count + 1 << "'s bathrooms." << endl;
      cin >> homes[count].bath;
    }
  for (int count = 0; count < NUMHomes; count++)
    {
      if (homes[count].bed > 1)
	{
	  cout << "Homes with more than one bedroom - " << endl
	       << "Owner: " << homes[count].owner << endl
	       << "Price: " << homes[count].price << endl
	       << "Bedrooms: " << homes[count].bed << endl
	       << "Bathrooms: " << homes[count].bath << endl << endl;
	}
    }
  for (int count = 0; count < NUMHomes; count++)
    {
      if (homes[count].price > 499 && homes[count].price < 801)
	{
	  cout << "Homes Between 500 and 800 - " << endl;
	  cout << "Owner: " << homes[count].owner << endl
	       << "Price: " << homes[count].price << endl
	       << "Bedrooms: " << homes[count].bed << endl
	       << "Bathrooms: " << homes[count].bath << endl;
	}
    }
  return 0;
}

