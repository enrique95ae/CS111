#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


string translation(string);
int main()
{
  string phrase;


  cout << "Enter a sentence:" << endl;
  getline (cin, phrase);
  phrase = translation(phrase);
  cout << phrase << endl;
}


string translation(string word)
{
  string translateWord, translateSentence = "";
  int length = 0, index = 0;


  while (word[index] != '\0')
    {
      if (word.find (' ', index) != -1)
      {
        if (word.find(' ',index) == 0)
          {
            index++;
            continue;
          }
        if(word.substr(index,1) == " " )
          {
            index++;
            continue;
            }
      length = word.find(' ', index);
      length -= index;
      translateWord = word.substr(index, length);
      translateWord.insert(length, "ay");
      translateWord.insert(length, 1, word[index]);
      translateWord.erase(0,1);
      index += length ;
      }
  else
      {
      translateWord = word.substr(index);
      length = translateWord.length();
      translateWord.insert(length, "ay");
      translateWord.insert(length,1, word[index]);
      translateWord.erase (0, 1);
      index = word.length();
      }


  translateSentence += (translateWord + " ");
    }
return translateSentence;
}
 
