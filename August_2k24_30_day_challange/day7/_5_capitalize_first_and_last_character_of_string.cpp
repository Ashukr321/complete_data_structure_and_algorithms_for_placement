// preprocessor
#include <iostream>
using namespace std;

string capitalizeFirstAndLastChar(string &str)
{
  string result = str;
  result[0] = toupper(result[0]);
  result[result.length()-1] = toupper(result[result.length()-1]);
  return result;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string" << endl;
  cin >> str;
  cout << "before capitalized the character :" << endl;
  cout << str << endl;
  string cpStr = capitalizeFirstAndLastChar(str);
  cout << "After capitalizeFirstAndLastChar string : " << cpStr << endl;

  return 0;
}