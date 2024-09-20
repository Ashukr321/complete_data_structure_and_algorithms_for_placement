// preprocessor
#include <iostream>
using namespace std;

int numSum(int num, int sum = 0)
{
  if (num == 0)
  {
    return sum;
  }
  sum += num;
  numSum(num - 1, sum);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "the sum of the number 1 to n => " << numSum(num) << endl;
  return 0;
}