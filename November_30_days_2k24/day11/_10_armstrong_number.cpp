// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int countDigit(int num)
{
  int count = 0;

  while (num > 0)
  {
    count++;
    num = num / 10;
  }
  return count;
}
bool isArmstrong(int num)
{
  int cd = countDigit(num);
  int temp = num;
  int sum = 0;
  while (num > 0)
  {
    int rem = num % 10;
    sum = sum + pow(rem, cd);
    num = num / 10;
  }
  return sum == temp;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :/" << endl;
  cin >> num;

  if (isArmstrong(num))
  {
    cout << "Armstrong number" << endl;
  }
  else
  {
    cout << "Not Armstrong number" << endl;
  }
  return 0;
}