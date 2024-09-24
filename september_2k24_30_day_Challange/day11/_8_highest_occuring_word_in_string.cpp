// preprocessor
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

void maxOccurringWordInString(string str)
{
  int max = 0;
  string word;
  istringstream iss(str);
  map<string, int> wordFrequency;
  string maxWord;
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
    if (it->second > max)
    {
      max = it->second; // update max
      maxWord = it->first;
    }
  }
  cout << "Maximum occurring word in the sentences : " << maxWord << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  maxOccurringWordInString(str);
  return 0;
}