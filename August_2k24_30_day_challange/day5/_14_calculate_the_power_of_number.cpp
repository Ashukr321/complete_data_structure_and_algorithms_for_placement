// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int powerNum(int num)
{
  if (num ==0)
  {
    return 1;
  }
  return pow(num, 2);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number: " << endl;
  cin >> num;
  cout << "calculate the power of the number:  " << powerNum(num) << endl;

  return 0;
}