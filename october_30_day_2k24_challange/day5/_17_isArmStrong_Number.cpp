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

bool isArmString(int num)
{
  int originalNum = num;
  int cd = countDigit(num);
  int sum = 0;
  while (num != 0)
  {
    int rem = num % 10;
    sum = sum + pow(rem, cd);
    num = num / 10;
  }
  return sum == originalNum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number:" << endl;
  cin >> num;
  if (isArmString(num))
  {
    cout << "The number is an armstrong number";
  }
  else
  {
    cout << "The number is not an armstrong number";
  }
  return 0;
}