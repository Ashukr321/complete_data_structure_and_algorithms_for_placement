// preprocessor
#include <iostream>
using namespace std;

string reverseString(string str)
{
  string result;
  for (int i =str.length()-1; i>=0; i-- )
  {
    result += str[i];
  }
  return result;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter a sentence : ";
  cin >> str;
  string reverseStr = reverseString(str);
  cout << "Reverse of the Sentence is: " << reverseStr;

  return 0;
}