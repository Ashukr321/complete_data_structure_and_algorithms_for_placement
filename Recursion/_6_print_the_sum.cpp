// preprocessor
#include <iostream>
using namespace std;

int sumNum(int n)
{
  if (n < 0)
  {
    return 0;
  }
  int sum = 0;
  sum += n + sumNum(n - 1);
  return sum;
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your sum :" << endl;
  cin >> n;
  cout << endl;
  int total = sumNum(n);
  cout << total << endl;
  return 0;
}