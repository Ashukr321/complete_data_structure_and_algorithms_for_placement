// preprocessor
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// function defination
string firstOccurrence(string str, string data)
{
  vector<string> strv;
  stringstream ss(str);
  string word;
  while (ss >> word)
  {
    strv.push_back(word);
  }
  for (int i = 0; i < str.size(); i++)
  {
    if (strv[i] == data)
    {
      return strv[i];
    }
  }
  return "-1";
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  getline(cin, str);
  if (firstOccurrence(str, "hi") != "-1")
  {
    cout << "First occurrence of the word is " << firstOccurrence(str, "hi") << endl;
  }
  else
  {
    cout << "Word not found in the string" << endl;
  }
  return 0;
}