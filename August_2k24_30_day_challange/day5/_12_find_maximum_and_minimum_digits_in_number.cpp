// preprocessor
#include <iostream>
using namespace std;

void findMaxMinDigits(int num)
{
  int maxD = INT_MIN;
  int minD = INT_MAX;
  while (num != 0)
  {
    int digit = num % 10;
    if (digit > maxD)
    {
      maxD = digit;
    }
    else if (digit < minD)
    {
      minD = digit;
    }
    num = num / 10;
  }
  cout << "maximum digit :" << maxD << endl;
  cout << "minimum digit :" << minD << endl;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  findMaxMinDigits(num);

  return 0;
}