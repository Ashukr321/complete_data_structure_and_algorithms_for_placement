// preprocessor
#include <iostream>
using namespace std;

int bruteForceMatchingAlgo(string text, int n, string pattern, int m)
{
  for (int i = 0; i <= n - m; i++)
  {
    int j = 0;
    while (j < n && pattern[j] == text[i + j])
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
  cout << "Entre your text :" << endl;
  getline(cin, text);
  cout << "Enter your pattern " << endl;
  getline(cin, pattern);

  int n = text.length();
  int m = pattern.length();
  int firstOccurrenceIndex = bruteForceMatchingAlgo(text, n, pattern, m);
  if (firstOccurrenceIndex != -1)
  {
    cout << "Pattern found at index " << firstOccurrenceIndex << endl;
  }
  else
  {
    cout << "Pattern not found" << endl;
  }
  return 0;
}

// time complexity => O(n*m );
// space complexity = O(1);