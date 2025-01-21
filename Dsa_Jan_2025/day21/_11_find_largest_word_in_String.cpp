// preprocessor
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

void maxLengthWord(string str)
{
  stringstream ss(str);
  vector<string> words;
  string word;
  int maxlength = 0;
  string maxword = "";
  while (ss >> word)
  {
    words.push_back(word);
  }
  for (int i = 0; i < words.size(); i++)
  {
    if (words[i].length() > maxlength)
    {
      maxlength = words[i].length();
      maxword = words[i];
    }
  }
  cout << "maxword : " << maxword << endl;
}
// main start here ...
int main()
{
  string str;
  cout << "Enter string : ";
  getline(cin, str);
  maxLengthWord(str);
  return 0;
}

/*
 take input
 calcualte freq
 int maxlength = 0;
 string maxword = "";
 check  and set maxlength and maxword
 reutrn
*/