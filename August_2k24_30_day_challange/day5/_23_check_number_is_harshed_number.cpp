// preprocessor
#include <iostream>
using namespace std;

bool isHarshed(int num)
{
  int digitSum = 0;
  int temp = num;
  while (temp != 0)
  {
    int digit = temp % 10;
    digitSum = digitSum + digit;
    temp = temp / 10;
  }
  return (num % digitSum) == 0;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  if (isHarshed(num))
  {
    cout << "Number is Harshed " << endl;
  }
  else
  {
    cout << "Number is not Harshed " << endl;
  }

  return 0;
}