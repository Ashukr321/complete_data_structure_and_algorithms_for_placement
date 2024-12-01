// preprocessor
#include <iostream>
using namespace std;

int reverseNum(int num)
{
  int rev = 0;
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return rev;
}
// main start here ...
int main()
{

  int num;
  cout << "Enter the number : ";
  cin >> num;
  cout << "Reverse of the number is : " << reverseNum(num);
  return 0;
}