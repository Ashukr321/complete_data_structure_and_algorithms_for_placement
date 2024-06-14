// preprocessor
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findOccuranceOfString(string main_str, string sub_str)
{

  vector<int> occurance;
  int main_len = main_str.length();
  int sub_len = sub_str.length();

  for (int i = 0; i < main_len - sub_len; i++)
  {
    if (main_str.substr(i, sub_len) == sub_str)
    {
      occurance.push_back(i);
    }
  }
  return occurance;
}
// main start here ...
int main()
{

  string main_str;
  cout << "Enter the main string : " << endl;
  getline(cin, main_str);
  string sub_str;
  cout << "Enter the subString : " << endl;
  getline(cin, sub_str);

  vector<int> result = findOccuranceOfString(main_str, sub_str);
  for (int it : result)
  {
    cout << it << endl;
  }

  return 0;
}