// preprocessor
#include <iostream>
#include <sstream>
using namespace std;

void removeDuplicates(string &str)
{
  string newString = "";
  stringstream ss(str);
  string word;
  while (ss >> word)
  {
    if (newString.find(word) == string::npos)
    {
      newString += word+" ";
    }
  }
  // update the string
  str = newString;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  getline(cin, str);
  cout << "Before remove duplicate words in sentence" << str << endl;
  removeDuplicates(str);
  cout << "After removing duplicate word " << str << endl;
  return 0;
}