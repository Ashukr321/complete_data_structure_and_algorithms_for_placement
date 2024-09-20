// preprocessor
#include <iostream>
using namespace std;

bool isPositive(int num)
{
  if (num < 0)
    return false;
  else
    return true;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isPositive(num))
  {
    cout << "The number is positive." << endl;
  }
  else
  {
    cout << "The number is not positive." << endl;
  }

  return 0;
}