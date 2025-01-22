// preprocessor
#include <iostream>
#include <cmath>
using namespace std;

int powerSum(int num)
{
  int sum = 0;
  // base case
  if (num == 0)
  {
    return sum;
  }
  int digit = num % 10;
  sum += pow(digit, 2);
  return sum + powerSum(num / 10);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the your number " << endl;
  cin >> num;

  cout << "the sum of the number " << powerSum(num) << endl;
  return 0;
}