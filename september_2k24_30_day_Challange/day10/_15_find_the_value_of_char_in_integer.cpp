// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  char ch;
  cout << "Enter your character :" << endl;
  cin >> ch;
  cout << "Ascii value of the enter your character is :" << static_cast<int>(ch) << endl;
  return 0;
}