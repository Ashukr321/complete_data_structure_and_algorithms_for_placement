// preprocessor
#include <iostream>
using namespace std;

// find the gcd using recursion
int gcd(int a, int b)
{
  // base case
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

// main start here ...
int main()
{
  int num1, num2;
  cout << "Enter your num1 :" << endl;
  cin >> num1;
  cout << "Enter your 2nd number num2 :" << endl;
  cin >> num2;
  cout << "Gcd of the two number  is : " << gcd(num1, num2) << endl;
  return 0;
}