// preprocessor
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


void FrequencyOfStr(string str) {
  map<char, int> frequencyChar;
  for (int i = 0; i < str.length(); i++) {
  
    if (frequencyChar.find(str[i]) != frequencyChar.end()) {
      frequencyChar[str[i]]++;
    } else {
     
      frequencyChar[str[i]] = 1;
    }
  }

  // Print the frequency of each character
  for (auto& pair : frequencyChar) {
    cout << "Character: " << pair.first << ", Frequency: " << pair.second << endl;
  }
}

// main starts here ...
int main() {
  string str;
  cout << "Enter your string: " << endl;
  cin >> str;
  FrequencyOfStr(str);

  return 0;
}