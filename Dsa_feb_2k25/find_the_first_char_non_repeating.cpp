#include <iostream>
#include <map>
using namespace std;

void printFirstNonRepeatingChar(string str)
{
  // calculate the freq of string
  map<char, int> freqChar;
  for (int i = 0; i < str.length(); i++)
  {
    freqChar[str[i]]++;
  }

  for (auto it = freqChar.begin(); it != freqChar.end(); it++)
  {
    // cout<<it->first<<" =>"<< it->second<<endl;

    if(it->second ==1){
      cout<<"First Non Repeating Char is "<<it->first<<endl;
      break;
    }
  }
}




int main()
{
  string str;
  cout << "Enter string" << endl;
  cin >> str;
  printFirstNonRepeatingChar(str);

  return 0;
}