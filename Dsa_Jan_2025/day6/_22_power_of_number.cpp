// preprocessor
#include <iostream>
#include <cmath>
using namespace std;

int powNum(int num)
{
  return pow(num, 2);
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  cout << "Power of the enter your number " << num << " -> "<< powNum(num) << endl;
  return 0;
}