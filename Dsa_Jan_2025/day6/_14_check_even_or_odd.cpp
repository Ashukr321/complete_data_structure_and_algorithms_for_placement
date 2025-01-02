// preprocessor
#include <iostream>
using namespace std;

void isEvenOdd(int num)
{
  if (num % 2 == 0)
  {
    cout << "Even number " << endl;
  }
  else
  {
    cout << "odd number " << endl;
  }
}
// main start here ...
int main()
{
  int num;
  cout << "enter the number : ";
  cin >> num;

  isEvenOdd(num);
  return 0;
}