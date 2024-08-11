// preprocessor
#include <iostream>
using namespace std;

int oddNumSum(int num, int sum = 0)
{
  // base case
  if (num == 0)
  {
    return sum;
  }
  if (num % 2 != 0)
  {
    sum += num;
  }
  return oddNumSum(num - 1, sum);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number : " << endl;
  cin >> num;
  cout << "the sum of the odd number from n to 1 :" << oddNumSum(num) << endl;
  return 0;
}