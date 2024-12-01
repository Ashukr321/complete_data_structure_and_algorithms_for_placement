// preprocessor
#include <iostream>
using namespace std;

bool isHarshNumber(int num)
{
  int sum = 0;
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return num % sum == 0;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  isHarshNumber(num) ? cout << "Harsh Number" : cout << "Not Harsh Number";
  return 0;
}