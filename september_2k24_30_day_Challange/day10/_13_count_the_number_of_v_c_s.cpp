// preprocessor
#include <iostream>
using namespace std;

void countVCS(string str)
{
  int v = 0, c = 0, s = 0;

  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      v++;
    }
    else if (str[i] == ' ')
    {
      s++;
    }
    else
    {
      c++;
    }
  }
  cout << "total vowel: " << v << endl;
  cout << "total consonant: " << c << endl;
  cout << "total spaces: " << s << endl;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter your string :" << endl;
  getline(cin, str);
  countVCS(str);

  return 0;
}