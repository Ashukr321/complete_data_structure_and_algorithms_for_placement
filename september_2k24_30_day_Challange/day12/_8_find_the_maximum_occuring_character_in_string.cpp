// preprocessor
#include <iostream>
#include <map>
using namespace std;

void findMaximumOccurringChar(string str)
{
  int max = 0;
  char ch;
  map<char, int> frequencyOfChar;
  for (char c : str)
  {
    if (frequencyOfChar.find(c) != frequencyOfChar.end())
    {
      frequencyOfChar[c]++;
    }
    else
    {
      frequencyOfChar[c] = 1;
    }
  }
  for (auto it = frequencyOfChar.begin(); it != frequencyOfChar.end(); it++)
  {
    if (it->second > max)
    {
      max = it->second;
      ch = it->first;
    }
  }
  cout << "Maximum occurring character is " << ch << " and it occurs " << max;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin,str);
  findMaximumOccurringChar(str);

  return 0;
}