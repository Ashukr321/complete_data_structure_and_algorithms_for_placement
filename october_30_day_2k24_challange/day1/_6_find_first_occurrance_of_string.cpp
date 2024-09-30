// preprocessor
#include <iostream>
using namespace std;

int bruteForceApproachStringMatching(string text, int n, string pattern, int m)
{
  for (int i = 0; i <= n - m; i++) // changed from < to <=
  {
    int j = 0;
    while (j < m && pattern[j] == text[i + j]) // changed from j < n to j < m
    {
      j++;
    }
    if (j == m)
    {
      return i;
    }
  }
  return -1;
}

// main start here ...
int main()
{
  string text, pattern;
  cout << "Enter your text: " << endl;
  getline(cin, text);
  cout << "Enter your pattern: " << endl;
  getline(cin, pattern);

  int n = text.length();
  int m = pattern.length();

  int patternIndex = bruteForceApproachStringMatching(text, n, pattern, m);
  if (patternIndex != -1)
  {
    cout << "Pattern found at index " << patternIndex << endl;
  }
  else
  {
    cout << "Pattern not found." << endl;
  }
  return 0;
}