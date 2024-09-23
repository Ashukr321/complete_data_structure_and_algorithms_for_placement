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
  for (auto it = charFrequency.begin(); it != charFrequency.end(); it++)
  {
    if (it->second == 1)
    {
      cout << "character  frequency : " << it->first << "  " << it->second << endl;
    }
  }

  return 0;
}