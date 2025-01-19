// preprocessor
#include <iostream>
using namespace std;

// main start here ...
int main()
{
  string str;
  cout << "Enter your string " << endl;
  cin >> str;
  int start, end;
  cout << "Enter start and end index " << endl;
  cin >> start >> end;
  string sub;
  sub = str.substr(start, end);
  cout << "Substring is " << sub << endl;
  return 0;
}
