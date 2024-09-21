// preprocessor
#include <iostream>
using namespace std;

int sumOfAp(int a, int n, int d)
{
  int sum = n * (2 * a - (n - 1) * d) / 2;
  return sum;
}

// main start here ...
int main()
{
  int a, n, d;
  cout << "Enter the first term :" << endl;
  cin >> a;
  cout << "Enter the nth term :" << endl;
  cin >> n;
  cout << "Enter the difference between the term :" << endl;
  cin >> d;

  cout << "The sum of the AP is: " << sumOfAp(a, n, d) << endl;
  return 0;
}