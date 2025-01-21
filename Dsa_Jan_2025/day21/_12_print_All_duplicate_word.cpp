// preprocessor
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

void print_duplicate(string str)
{
  map<string, int> freqStrings;
  stringstream ss(str);
  string word;
  while (ss >> word)
  {
    freqStrings[word]++;
  }
  for (auto it = freqStrings.begin(); it != freqStrings.end(); it++)
  {
    if (it->second > 1)
    {
      cout << it->first << " ";
    }
  }
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  getline(cin, str);
  print_duplicate(str);
  return 0;
}