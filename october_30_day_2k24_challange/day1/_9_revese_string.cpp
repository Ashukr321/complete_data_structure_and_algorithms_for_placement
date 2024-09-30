// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void reverseString(string &str)
{
  int i = 0;
  int j = str.size() - 1;
  while (i < j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string:" << endl;
  cin >> str;
  cout << "Before reversing the string :" << endl;
  cout << str << endl;
  cout << endl;
  cout << "After reversing the string" << endl;
  reverseString(str);
  cout << str << endl;
  return 0;
}