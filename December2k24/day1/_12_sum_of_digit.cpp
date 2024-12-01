// preprocessor
#include <iostream>
using namespace std;

int sumOfDigit(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum = sum + digit;
    num /= 10;
  }
  return sum;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "The sum of digit is :";
 cout<< sumOfDigit(num)<<endl;

  return 0;
}