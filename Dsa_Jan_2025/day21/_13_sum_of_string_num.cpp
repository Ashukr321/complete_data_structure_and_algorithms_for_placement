// preprocessor
#include <iostream>
using namespace std;

void sum_of_string_num(string str1, string str2)
{
  int num1 = stoi(str1);
  int num2 = stoi(str2);
  int sum = num1 + num2;
  cout << "the sum of the string " << sum << endl;
}
// main start here ...
int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  sum_of_string_num(str1, str2);

  return 0;
}