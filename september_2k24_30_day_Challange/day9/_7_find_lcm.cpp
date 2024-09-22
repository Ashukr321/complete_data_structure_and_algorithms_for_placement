// preprocessor
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
  // base case
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return (a * b) / gcd(a, b);
}
// main start here ...
int main()
{
  int num1, num2;
  cout << "Enter the value of the num 1" << endl;
  cin >> num1;
  cout << "Enter the value of the num 2 " << endl;
  cin >> num2;

  cout << "Lcm of the " << num1 << "and  " << num2 << " is : " << lcm(num1, num2) << endl;
  return 0;
}