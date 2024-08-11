// preprocessor
#include <iostream>
using namespace std;

int cubeSum(int n)
{
  // base case
  if (n == 1)
  {
    return 1;
  }
  return n * n * n + cubeSum(n - 1);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number n:" << endl;
  cin >> n;
  cout << "the sub of the cube of numbers : " << cubeSum(n) << endl;
  return 0;
}