// preprocessor
#include <iostream>
#include <cmath>
using namespace std;

int sum_of_cube(int num)
{
  int sum = 0;
  // base case
  if (num == 0)
  {
    return 0;
  }
  int digit = num % 10;
  sum += pow(digit, 3);
  return sum + sum_of_cube(num / 10);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  cout << sum_of_cube(num) << endl;
  return 0;
}