// preprocessor
#include <iostream>
#include <map>
using namespace std;

void maxOccurringChar(string str)
{
  // create the map
  map<char, int> frequencyChar;
  int max = 0;
  char ch;
  for (char c : str)
  {
    if (frequencyChar.find(c) != frequencyChar.end())
    {
      frequencyChar[c]++;
    }
    else
    {
      frequencyChar[c] = 1;
    }
  }
  for (auto it = frequencyChar.begin(); it != frequencyChar.end(); it++)
  {
    if (it->second > max)
    {
      max = it->second;
      ch = it->first;
    }
    
    cout << "frequency of \t" << it->first << " is :  \t" << it->second << endl;
  }

  cout << "maximum occurring character in the string is :" << ch << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  maxOccurringChar(str);
  return 0;
}