#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int countNumberOfWords(string str)
{
  istringstream iss(str);
  int count = 0;
  string word;
  while (iss >> word)
  {
    count++;
  }
  return count;
}

int main()
{
  string str;
  cout << "Enter your string " << endl;
  getline(cin, str);
  cout << "Number of words in the string is " << countNumberOfWords(str) << endl;
  return 0;
}