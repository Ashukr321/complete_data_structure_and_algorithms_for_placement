// preprocessor
#include <iostream>
using namespace std;

void countVowelConsonantSpaces(string str)
{
  int vowelCount = 0, consonantCount = 0, spaceCount = 0;
  for (auto ch : str)
  {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
      vowelCount = vowelCount + 1;
    }
    else if (ch == ' ')
    {
      spaceCount = spaceCount + 1;
    }
    else
    {
      consonantCount = consonantCount + 1;
    }
  }
  cout << "vowel count : " << vowelCount << endl;
  cout << "consonant count : " << consonantCount << endl;
  cout << "space count : " << spaceCount << endl;
}

// main start here ...
int main()
{
  string str;
  cout << "Enter your string" << endl;
  getline(cin, str);
  countVowelConsonantSpaces(str);
  return 0;
}