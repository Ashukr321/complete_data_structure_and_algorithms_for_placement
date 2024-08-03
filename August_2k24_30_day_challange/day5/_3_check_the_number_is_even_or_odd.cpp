// preprocessor
#include <iostream>
using namespace std;
void checkEvenOrOdd(int num)
{
  if (num <= 0)
  {
    cout << "Invalid input" << endl;
    return;
  }
  if (num % 2 == 0)
  {
    cout << "even" << endl;
  }
  else
  {
    cout << "Odd" << endl;
  }
}
// main start here ...
int main()
{
  int n;
  cout << "Enter the your number :" << endl;
  cin >> n;
  checkEvenOrOdd(n);
  return 0;
}