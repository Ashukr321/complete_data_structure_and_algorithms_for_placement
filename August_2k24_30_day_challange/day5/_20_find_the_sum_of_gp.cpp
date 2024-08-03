// preprocessor
#include <iostream>
using namespace std;
int sumOfGp(int a, int r)
{
  //  a is the first term
  // r is the common ratio
  if (r < 1)
  {
    return -1;
  }
  return a / (1 - r);
}

// main start here ...
int main()
{
  int a;
  cout << "Enter the first term of the gp " << endl;
  cin >> a;
  int r;
  cout << "Enter the common ratio :" << endl;
  cin >> r;
  cout << "the sum of the gp : " << sumOfGp(a, r) << endl;

  return 0;
}