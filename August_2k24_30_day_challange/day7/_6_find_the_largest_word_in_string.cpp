#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string findLargestWord(const string &inputString)
{
  string largestWord;
  istringstream iss(inputString);
  string word;

  while (iss >> word)
  {
    if (word.size() > largestWord.size())
    {
      largestWord = word;
    }
  }

  return largestWord;
}

int main()
{
  string inputString;
  cout << "Enter your string :" << endl;
  getline(cin, inputString);
  std::cout << "Largest word: " << findLargestWord(inputString) << endl;
  return 0;
}