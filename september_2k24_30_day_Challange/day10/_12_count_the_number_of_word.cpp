// preprocessor
#include <iostream>
#include <sstream>
using namespace std;

int countWord(string str)
{
  istringstream iss(str);
  string word;
  int count = 0;
  while (iss >> word)
  {
    count++;
  }
  return count;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your sentences: ";
  getline(cin, str); // use getline to read entire line
  cout << "Total words in the string is: " << countWord(str) << endl;
  return 0;
}