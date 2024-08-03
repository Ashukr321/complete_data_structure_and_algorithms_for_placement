// preprocessor
#include <iostream>
using namespace std;

int reverseNum(int num)
{
  int reversed = 0;
  while (num != 0)
  {
    int remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num = num / 10;
  }
  return reversed;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number:" << endl;
  cin >> num;
  cout << "before reversed the digits :" << num << endl;
  cout << endl;
  cout << "After reverse the digits of the number :" << reverseNum(num) << endl;
  return 0;
}