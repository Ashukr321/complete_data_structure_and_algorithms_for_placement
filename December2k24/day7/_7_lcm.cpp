// preprocessor
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
  // recursion
  // base case
  if (b == 0)
  {
    return a;
  }
  return hcf(b, a % b);
}
int lcm(int a, int b)
{
  return a * b / hcf(a, b);
}

// main start here ...
int main()
{
  int a,  b;
  cout << "Enter the a:" << endl;
  cin >> a;
  cout << "Enter the b:" << endl;
  cin >> b;
  cout << "The lcm of a and b is:" << endl;
 cout<<lcm(a,b)<<endl;
  return 0;
}