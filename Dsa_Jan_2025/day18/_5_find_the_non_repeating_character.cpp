// preprocessor
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void find_non_repeating_char(string str)
{
  map<char, int> freqChar;
  vector<char> non_repeating_char;
  for (int i = 0; i < str.length(); i++)
  {
    freqChar[str[i]]++;
  }
  for (auto it = freqChar.begin(); it != freqChar.end(); it++)
  {
    if (it->second == 1)
    {
      non_repeating_char.push_back(it->first);
    }
  }

  // print all non_repeating_characters
  for (int i = 0; i < non_repeating_char.size(); i++)
  {
    cout << non_repeating_char[i] << " , ";
  }
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  cin >> str;
  find_non_repeating_char(str);
  return 0;
}