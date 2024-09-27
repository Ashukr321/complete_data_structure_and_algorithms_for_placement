// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void sortCharStr(string &str)
{
  string sortChar;
  for (char c : str)
  {
    if (isalnum(c))
    {
      sortChar += c;
    }
  }
  sort(sortChar.begin(), sortChar.end());
  str = sortChar;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "before sorting char  of string " << endl;
  cout << str << endl;
  cout << endl;
  cout << "After sorting char :" << endl;
  sortCharStr(str);
  cout << str << endl;
  return 0;
}