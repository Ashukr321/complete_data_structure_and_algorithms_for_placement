// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

void sortChars(string &str)
{
  sort(str.begin(), str.end());
}
// main start here ...
int main()
{
  string str;
  cout << "Enter the string : ";
  getline(cin, str);
  cout << "Before unsorted char" << str << endl;
  sortChars(str);
  cout << "Sorted string : " << str;
  return 0;
}