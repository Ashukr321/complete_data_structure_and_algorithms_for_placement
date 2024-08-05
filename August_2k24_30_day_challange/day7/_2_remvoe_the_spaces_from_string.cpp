#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string removeSpacesFromString(string &str)
{
  str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
  return str;
}

int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str); // use getline to read the entire line, including spaces
  cout << "Before removing the spaces" << endl;
  cout << str << endl;
  str = removeSpacesFromString(str);
  cout << "After removing the spaces from the string " << endl;
  cout << str << endl;
  return 0;
}