// preprocessor
#include <iostream>
using namespace std;

string getSubString(string str, int s, int e)
{

  string res = str.substr(s, e);
  return res;
}
// main start here ...
int main()
{
  string str;
  int s,e;
  cout << "Enter the main string :";
  cin >> str;

  cout << "Enter the start index  : " << endl;
  cin >> s;

  cout << "Enter the end index: " << endl;
  cin >> e;

  
  cout << "Original string : " << endl;
  cout << str << endl;
  string subString = getSubString(str, s, e);
  cout << "substring: " << subString << endl;
  return 0;
}

/*
  time complexity  is the o(len) ,worst case time complexity 
*/