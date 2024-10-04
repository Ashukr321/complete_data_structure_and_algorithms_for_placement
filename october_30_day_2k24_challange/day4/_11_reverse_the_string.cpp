// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void reverseStr(string &str) // here  we have to pass by the reference 
{
  int i = 0;
  int j = str.length() - 1;
  while (i < j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
}

int main()
{
  string str;
  cout << "Enter a string: ";
  cin >> str;
  cout << "Before reverse " << endl;
  cout << str << endl;
  cout << endl;
  cout << "After reverse the string :" << endl;
  reverseStr(str);
  cout << str << endl;
  return 0;
}