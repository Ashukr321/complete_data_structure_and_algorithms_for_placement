// preprocessor
#include <iostream>
#include <map>
using namespace std;

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  map<char, int> charFrequency;
  for (char c : str)
  {
    if (charFrequency.find(c) != charFrequency.end())
    {
      charFrequency[c]++;
    }
    else
    {
      charFrequency[c] = 1;
    }
  }
  cout << "Frequency of the string character " << endl;
  for (auto it = charFrequency.begin(); it != charFrequency.end(); it++)
  {
    cout << "frequency of " << it->first << " is " << it->second << endl;
  }
  return 0;
}