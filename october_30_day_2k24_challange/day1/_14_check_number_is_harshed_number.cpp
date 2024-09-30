// preprocessor
#include <iostream>
using namespace std;

bool isHarshedNum(int num)
{
  int sum = 0;
  int originalNum = num;
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num = num / 10;
  }


  return (originalNum%sum==0);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isHarshedNum(num))
  {
    cout << "Number is Harshed Number" << endl;
  }
  else
  {
    cout << "Number is not Harshed Number" << endl;
  }
  return 0;
}