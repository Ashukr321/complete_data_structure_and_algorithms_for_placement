// preprocessor
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
  // base cae
  if (b == 0)
  {
    return a;
  }
  
  return hcf(b, a % b);
}


// main start here ...
int main()
{
  int a, b;
  cout << "Enter the element  a and b " << endl;
  cin >> a >> b;
  cout << "hcf of the enter your number " << hcf(a, b) << endl;
  return 0;
}