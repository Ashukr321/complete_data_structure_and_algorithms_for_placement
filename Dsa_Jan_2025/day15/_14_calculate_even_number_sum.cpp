// preprocessor
#include <iostream>
using namespace std;

int EvenSum(int n, int sum = 0)
{
  // base case
  if (n == 0)
  {
    return sum;
  }
  if (n % 2 == 0)
  {
    sum += n;
  }
  return EvenSum(n - 1, sum);
}
// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  int evenSum = EvenSum(n);
  cout << "The sum of even number is : " << evenSum << endl;
  return 0;
}