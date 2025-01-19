// preprocessor
#include <iostream>
#include <sstream>
using namespace std;

int countWord(string str)
{
  stringstream stream(str);
  string word = "";
  int count = 0;
  while (stream >> word)
  {
    count++;
  }
  return count;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter the string : ";
  getline(cin, str);

  cout << "the number of words in the string is :" << countWord(str) << endl;
  return 0;
}