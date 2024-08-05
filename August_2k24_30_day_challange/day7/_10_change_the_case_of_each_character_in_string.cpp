// preprocessor
#include <iostream>
using namespace std;

string changeCaseOfString(string str)
{
  string result = str;
  for (int i = 0; i < str.length(); i++)
  {
    result[i] = toupper(result[i]);
  }

  return result;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "before changing the case of the string : " << endl;
  cout << str << endl;
  cout << "After changing the case of the string : " << changeCaseOfString(str) << endl;

  return 0;
}