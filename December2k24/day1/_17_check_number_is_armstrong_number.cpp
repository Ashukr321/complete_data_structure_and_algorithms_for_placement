// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int num)
{
  int cnt = 0;
  while (num != 0)
  {
    cnt++;
    num = num / 10;
  }
  return cnt;
}
bool isArmstrong(int num)
{
  int cd = countDigit(num);
  int sum = 0;
  int temp = num;
  while (num != 0)
  {
    int digit = num % 10;
    sum += pow(digit, cd);
    num = num / 10;
  }
  return temp == sum;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  if (isArmstrong(num))
  {
    cout << num << " is an Armstrong number.";
  }
  else
  {
    cout << num << " is not an Armstrong number.";
  }
  return 0;
}