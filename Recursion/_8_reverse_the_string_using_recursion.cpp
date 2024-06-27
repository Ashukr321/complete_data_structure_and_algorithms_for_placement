// preprocessor
#include <iostream>
using namespace std;

string reverseString(string str, int size)
{
  if (size <= 0)
  {
    return "";
  }
  return str[size - 1] + reverseString(str, size - 1);
}

// main starts here ...
int main()
{
  string str;
  cout << "Enter your string: " << endl;
  cin >> str;
  cout << "Your string is: " << str << endl;
  cout << "Your reverse string is: " << reverseString(str, str.length()) << endl;

  return 0;
}
