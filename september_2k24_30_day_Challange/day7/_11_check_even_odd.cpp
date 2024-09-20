// preprocessor
#include <iostream>
using namespace std;

bool isEven(int num)
{
  if (num % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;

  if (isEven(num))
  {
    cout << "The number is even" << endl;
  }
  else
  {
    cout << "The number is odd" << endl;
  }
  return 0;
}