// preprocessor
#include <iostream>
using namespace std;

int maxOfTwo(int num1, int num2)
{
  if (num1 > num2)
  {
    return num1;
  }
  else
  {
    return num2;
  }
}

// main start here ...
int main()
{
  int num1, num2;
  cout << "Enter the first number : ";
  cin >> num1;
  cout << "Enter the second number : ";
  cin >> num2;
  cout << "Greatest of the two number :" << maxOfTwo(num1, num2) << endl;
  return 0;
}