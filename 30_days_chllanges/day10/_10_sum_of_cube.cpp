// preprocessor
#include <iostream>
using namespace std;

int cubeSum(int n)
{
  // base case
  if (n == 0)
  {
    return 0;
  }
  return n * n * n + cubeSum(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  int tSum = cubeSum(n);
  cout << "the sum of the cube :" << tSum << endl;
  return 0;
}