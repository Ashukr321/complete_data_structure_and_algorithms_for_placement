// preprocessor
#include <iostream>
using namespace std;

int sumNum(int n)
{
  int sum = 0;
  for (int i = 0; i <= n; i++)
  {
    sum += i;
  }
  return sum;
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  cout << "the sum of the n natural number " << sumNum(n) << endl;
  return 0;
}