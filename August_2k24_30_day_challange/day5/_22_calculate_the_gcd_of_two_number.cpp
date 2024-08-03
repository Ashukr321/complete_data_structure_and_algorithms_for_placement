// preprocessor
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

// main start here ...
int main()
{
  int num1;
  cout << "Enter the number n1" << endl;
  cin >> num1;
  int num2;
  cout << "Enter the number n2" << endl;
  cin >> num2;
  cout << "The gcd of the two number is : " << num1 << " and " << num2 << gcd(num1, num2) << endl;

  return 0;
}