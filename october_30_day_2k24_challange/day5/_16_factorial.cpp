// preprocessor
#include <iostream>
using namespace std;

int Factorial(int num)
{
  // base case
  if (num == 1)
  {
    return 1;
  }
  return num * Factorial(num - 1);
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "Factorial of the number :" << Factorial(num) << endl;

  return 0;
}