// preprocessor
#include <iostream>
using namespace std;

int countDigit(int num)
{
  // base case
  if (num == 0)
  {
    return 0;
  }
  // recursive relation
  num = num / 10;
  return  1+countDigit(num);
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  cout << "total digit in Enter your number :  " << countDigit(num) << endl;
  return 0;
}