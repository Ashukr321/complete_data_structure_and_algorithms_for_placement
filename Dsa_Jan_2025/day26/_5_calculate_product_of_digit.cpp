// preprocessor
#include <iostream>
using namespace std;


int productOfDigit(int num)
{
  // base case
  if (num == 0)
  {
    return 1;
  }
  int digit = num % 10;
  // recursive call
  return digit * productOfDigit(num / 10);
}


// main start here ...
int main()
{
  int num;
  cout << "Enter your digit" << endl;
  cin >> num;
  cout << "product of digit  " << productOfDigit(num) << endl;
  return 0;
}