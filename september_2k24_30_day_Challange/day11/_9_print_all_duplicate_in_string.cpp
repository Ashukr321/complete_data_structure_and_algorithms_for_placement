// preprocessor
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

void printDuplicateWordInString(string str)
{
  istringstream iss(str);
  map<string, int> wordFrequency;
  string word;
  while (iss >> word)
  {
    if (wordFrequency.find(word) != wordFrequency.end())
    {
      wordFrequency[word]++;
    }
    else
    {
      wordFrequency[word] = 1;
    }
  }
  for (auto it = wordFrequency.begin(); it != wordFrequency.end(); it++)
  {
    if (it->second > 1)
    {
      cout << it->first << "  -> " << it->second << endl;
    }
  }
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  printDuplicateWordInString(str);
  return 0;
}