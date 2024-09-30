// preprocessor
#include <iostream>
using namespace std;

int sizeOfString(string str)
{
  int cnt = 0;
  int i = 0;
  while (str[i] != '\0')
  {
    cnt++;
    i++;
  }
  return cnt;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "Length of the string : " << sizeOfString(str) << endl;

  return 0;
}