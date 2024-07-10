// preprocessor
#include <iostream>
using namespace std;

int oddSum(int n, int sum = 0)
{
  if(n<0){
    return -1;
  }
  // base case
  if (n == 0)
  {
    return sum;
  }
  if (n % 2 != 0)
  {
    sum += n;
  }
  return oddSum(n - 1, sum);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number : " << endl;
  cin >> n;

  cout << "the odd number of the sum n to 1 : " << oddSum(n) << endl;
  return 0;
}