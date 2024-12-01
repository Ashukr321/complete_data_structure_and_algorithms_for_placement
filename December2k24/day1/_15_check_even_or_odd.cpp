// preprocessor
#include <iostream>
using namespace std;

void isEvenOdd(int num)
{
  if (num % 2 ==0)
  {
    cout << num << " is Even number" << endl;
  }
  else
  {
    cout << num << " is Odd number" << endl;
  }
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;

  isEvenOdd(num);
  return 0;
}