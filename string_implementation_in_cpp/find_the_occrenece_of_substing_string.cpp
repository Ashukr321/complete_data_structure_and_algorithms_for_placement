#include <iostream>
#include <string>
#include <vector> // Added to include vector
using namespace std;

vector<int> findSubstringOccurrences(const string& main_str, const string& subString)
{
  vector<int> occurrence;
  int lenMain = main_str.length();
  int lenSub = subString.length();

  for (int i = 0; i <= lenMain - lenSub; i++)
  {
    if (main_str.substr(i, lenSub) == subString)
    {
      occurrence.push_back(i);
    }
  }
  return occurrence;
}
// 🤗🤗🤗🤗
int main()
{
  string main_str, subString;
  cout << "Enter the string : " << endl;
  getline(cin, main_str); 
  cout << "Enter the subString: " << endl;
  getline(cin, subString); 
  // getline handle the spaces🤗
  vector<int> result = findSubstringOccurrences(main_str, subString);
  for (auto it: result)
  {
    cout << it << endl;
  }
  return 0;
}

/*
  getline is use for the taking the input from the user that handle the spaces
  time complexity of the findSubstring Occurrence  -> o(n)
*/