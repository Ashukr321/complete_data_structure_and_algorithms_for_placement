// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int num)
{
  int cd = 0;
  while (num != 0)
  {
    cd++;
    num = num / 10;
  }
  return cd;
}
bool isArmStrong(int num)
{
  int cntDigit = countDigit(num);
  int originalNum = num;
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum = sum + pow(digit, cntDigit);
    num = num / 10;
  }

  return sum == originalNum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number num :" << endl;
  cin >> num;
  if (isArmStrong(num))
  {
    cout << num << " is an armstrong number" << endl;
  }
  else
  {
    cout << num << " is not an armstrong number" << endl;
  }
  return 0;
}