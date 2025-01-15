// preprocessor
#include <iostream>
using namespace std;

int sumNum(int num, int sum = 0)
{
  // base case
  if (num == 0)
  {
    return sum;
  }
  sum += num;
  return sumNum(num - 1, sum);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;
  int sum = sumNum(n);
  cout << "Sum of number 1 to n is : " << sum << endl;
  return 0;
}