// preprocessor
#include <iostream>
#include <string>
#include <algorithm> // for std::unique

using namespace std;


string removeDuplicate(string str) {
  string result = str;
  sort(result.begin(), result.end()); 
  result.erase(unique(result.begin(), result.end()), result.end());
  return result; 
}

// main starts here ...
int main() {
  string str;
  cout << "Enter your string: " << endl;
  cin >> str;
  cout << "String without duplicates: " << removeDuplicate(str) << endl;
  return 0;
}