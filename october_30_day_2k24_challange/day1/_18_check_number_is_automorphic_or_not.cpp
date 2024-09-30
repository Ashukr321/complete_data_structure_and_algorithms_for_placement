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
    num /= 10;
  }
  return cd;
}

bool isAutomorphic(int num)
{
  int digit = countDigit(num);
  int originalNum = num;
  int square = num * num;
  int devisor = pow(10, digit);
  int last = num % 10;

  return num == originalNum;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isAutomorphic(num))
  {
    cout << "The number is automorphic" << endl;
  }
  else
  {
    cout << "The number is not automorphic" << endl;
  }
  return 0;
}