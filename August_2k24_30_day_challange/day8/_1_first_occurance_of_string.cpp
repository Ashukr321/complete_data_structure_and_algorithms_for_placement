// preprocessor
#include <iostream>
#include <string>

using namespace std;

// main start here ...
int main()
{
  string str;
  cout << "Enter your string sentences: " << endl;
  getline(cin, str);

  string yourStr;
  cout << "Enter your string: " << endl;
  cin >> yourStr;
  size_t found = str.find(yourStr);
  if (found != string::npos)
  {
    cout << "First occurrence of string \"" << yourStr << "\" found at index: " << found << endl;
  }
  else
  {
    cout << "String \"" << yourStr << "\" not found in the sentence." << endl;
  }
  return 0;
}
// size_t  => represent the unsigned integer that hold the large size of the text or data 
// unsigned means it will hold non-negative value 
// find methods is the part of the string that iterates over the string 
