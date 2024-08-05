// preprocessor
#include <iostream>
using namespace std;

int getAsciiValue(char ch)
{
  return int(ch);
}

// main start here ...
int main()
{
  char ch;
  cout << "Enter your character :" << endl;
  cin >> ch;
  cout << "the Ascii value of the character is : " << endl;
  cout << getAsciiValue(ch) << endl;
  return 0;
}