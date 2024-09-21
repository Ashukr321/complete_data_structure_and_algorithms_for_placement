#include <iostream>
using namespace std;
int reverseNum(int num, int rev = 0)
{
  if (num == 0)
  {
    return rev;
  }
  int digit = num % 10;
  rev = rev * 10 + digit;
  return reverseNum(num / 10, rev);
}

int replaceAllZeroWithOne(int num, int rev = 0)
{
  if (num == 0)
  {
    return rev;
  }
  int digit = num % 10;
  if (digit == 0)
  {
    digit = 1;
  }
  rev = rev * 10 + digit;
  return reverseNum(replaceAllZeroWithOne(num / 10, rev));
}

int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "Before replacing the 0 with 1 : " << num << endl;
  cout << "After replacing the 0 with 1 : ";
  cout << replaceAllZeroWithOne(num) << endl;
  return 0;
}