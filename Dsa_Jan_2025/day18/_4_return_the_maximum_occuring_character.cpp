// preprocessor
#include <iostream>
#include <map>
using namespace std;

void maxOcuringChar(string str)
{
  map<char, int> freqChar;
  for (int i = 0; i < str.length(); i++)
  {
    freqChar[str[i]]++;
  }
  int max = 0;
  char maxChar;
  for (auto it = freqChar.begin(); it != freqChar.end(); it++)
  {
    if (it->second > max)
    {
      max = it->second;
      maxChar = it->first;
    }
  }
  cout << "max occur character " << maxChar << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string" << endl;
  cin >> str;
  maxOcuringChar(str);
  return 0;
}