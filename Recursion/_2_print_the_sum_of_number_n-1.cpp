// preprocessor
#include <iostream>
using namespace std;

int sumNum(int n)
{
  int sum = 0;
  // base case
  if (n == 0)
  {
    return 0;
  }
  sum += n + sumNum(n - 1);
  return sum;
}

// main start here ...
int main()
{

  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  int totalNumSum = sumNum(n);
  cout << "The sum of the number n -1  => " << totalNumSum << endl;
  return 0;
}