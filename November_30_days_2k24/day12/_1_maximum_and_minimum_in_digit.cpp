// preprocessor
#include <iostream>
using namespace std;

void printMaxMinDigit(int num)
{
  int max = INT_MIN;
  int min = INT_MAX;
  while (num != 0)
  {
    int digit = num % 10;
    max = digit > max ? digit : max;
    min = digit < min ? digit : min;
    num = num / 10;
  }
  cout << "Max digit is:" << max << endl;
  cout << "min digit :" << min << endl;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  printMaxMinDigit(num);

  return 0;
}