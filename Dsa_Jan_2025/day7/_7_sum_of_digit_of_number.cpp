// preprocessor
#include <iostream>
using namespace std;

int sumOfDigitOfNum(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum = sum + digit;
    num = num / 10;
  }
  return sum;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number" << endl;
  cin >> num;
  cout << sumOfDigitOfNum(num) << endl;
  return 0;
}