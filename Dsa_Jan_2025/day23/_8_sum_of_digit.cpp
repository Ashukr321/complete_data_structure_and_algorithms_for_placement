// preprocessor
#include <iostream>
using namespace std;

int sum_of_digit(int num)
{
  if (num == 0)
  {
    return 0;
  }
  return num % 10 + sum_of_digit(num / 10);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  cout << "the sum of the digit " << sum_of_digit(num) << endl;
  return 0;
}