// preprocessor
#include <iostream>
using namespace std;

int reverseNum(int n, int rev = 0)
{
  //   base case
  if (n == 0)
  {
    return rev;
  }
  int digit = n % 10;
  rev = rev * 10 + digit;
  reverseNum(n / 10, rev);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :";
  cin >> num;
  cout << "Before reverse the number :" << num << endl;
  cout << "After reverse the number :" << reverseNum(num) << endl;

  return 0;
}