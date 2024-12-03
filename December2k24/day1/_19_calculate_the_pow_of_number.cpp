// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

int powNum(int num)
{
  return pow(num,2);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  cout << "The power of number is : " << powNum(num) << endl;
  return 0;
}