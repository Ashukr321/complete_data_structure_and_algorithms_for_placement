// preprocessor
#include <iostream>
using namespace std;

string reverseStr(string str, int size){
  if(size <= 0){
    return "";
  }
  return str[size-1] + reverseStr(str, size-1);
}

bool checkStrPalindrome(string str)
{
  string reversedStr = reverseStr(str, str.length()); // Add parentheses here
  return str == reversedStr;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  cin >> str;
  cout << "Is palindrome " << (checkStrPalindrome(str) ? "true" : "false") << endl;

  return 0;
}