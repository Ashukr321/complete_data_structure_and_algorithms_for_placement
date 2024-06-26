// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string str1, string str2)
{
  string filterString1, filterString2;
  for (char c : str1)
  {
    filterString1 += c;
  }
  for (char c : str2)
  {
    filterString2 += c;
  }
  sort(filterString1.begin(), filterString1.end());
  sort(filterString2.begin(), filterString2.end());
  return filterString1 == filterString2;
}
// main start here ...
int main()
{
  string str1;
  string str2;
  cout << "Enter  your str 1 " << endl;
  cin >> str1;
  cout << "Enter your str 2" << endl;
  cin >> str2;
  cout << "Your str 1 is " << str1 << endl;
  cout << "Your str2 is " << str2 << endl;
  cout<<endl;
  if (anagram(str1, str2))
  {
    cout << "Enter your string is Anagram " << str1 << " and " << str2 << endl;
  }
  else
  {
    cout << "Enter your string is not Anagram " << str1 << " and " << str2 << endl;
  }
  return 0;
}