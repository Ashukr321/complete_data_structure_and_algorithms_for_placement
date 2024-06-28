// preprocessor
#include <iostream>
using namespace std;

// create recursion function that calculate the even sum
int EvenSum(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + EvenSum(n - 1);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the  even number:" << endl;
  cin >> n;
  int totalEvenSum = EvenSum(n);
  cout << "the sum  of the even number sum : " << totalEvenSum << endl;
  return 0;
}