// preprocessor
#include <iostream>
#include <sstream>
using namespace std;

void maxWordInString(string str)
{
  int max = 0;
  string word;
  string maxLengthWord;
  istringstream iss(str);
  while (iss >> word)
  {
    if (max < word.length())
    {
      max=word.length();
      maxLengthWord = word;
    }
  }
  cout << "max length word" << maxLengthWord << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  maxWordInString(str);
  return 0;
}