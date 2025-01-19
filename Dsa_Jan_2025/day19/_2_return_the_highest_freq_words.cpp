// preprocessor
#include <iostream>
#include <map>
#include <sstream>>
using namespace std;

// function
void highest_freq_word(string str)
{
  stringstream stream(str);
  string word;
  map<string, int> freqWord;
  while (stream >> word)
  {
    freqWord[word]++;
  }
  int maxFreq = 0;
  string highestFreqWord;
  for (auto it = freqWord.begin(); it != freqWord.end(); it++)
  {
    if (it->second > maxFreq)
    {
      maxFreq = it->second;
      highestFreqWord = it->first;
    }
  }

  cout << "Highest frequency word: " << highestFreqWord << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your sentence" << endl;
  getline(cin, str);
  highest_freq_word(str);
  return 0;
}