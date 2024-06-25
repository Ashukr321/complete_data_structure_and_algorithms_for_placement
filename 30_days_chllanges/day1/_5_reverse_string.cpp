// preprocessor
#include <iostream>
using namespace std;

string reverseString(string str)
{
  int i = 0;
  int len = str.length();
  int j = str.length() - 1;
  for (; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    j--;
  }
  return str;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter  your string " << endl;
  cin >> str;
  string revstr = reverseString(str);
  cout << revstr << endl;

  return 0;
}