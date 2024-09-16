// preprocessor
#include <iostream>
using namespace std;

int sumOfNumNto1(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + sumOfNumNto1(n - 1);
}

// main start here ...
int main()
{

  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  int sumOfNum = sumOfNumNto1(n);
  cout << "the sum of the number from 1 to " << n<< " =>  " << sumOfNum << endl;
  return 0;
}