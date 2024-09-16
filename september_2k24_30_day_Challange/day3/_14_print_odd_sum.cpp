// preprocessor
#include <iostream>
using namespace std;

int oddSum(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  else if (n % 2 != 0)
  {
    return n + oddSum(n - 1);
  }
  else
  {
    return oddSum(n - 1);
  }
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number :" << endl;
  cin >> n;
  cout << "Sum of odd numbers from 1 to " << n << " is " << oddSum(n)<<endl;
 return 0;
}