// preprocessor
#include <iostream>
using namespace std;

int digitSum(int num)
{
  int sum = 0;
  while (num != 0)
  {
    sum += num % 10;
    num = num / 10;
  }
  return sum;
}
bool isHarshedNum(int num)
{
  int sd = digitSum(num);
  return num % sd == 0;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isHarshedNum(num))
  {
    cout << "Number is Harshed Number" << endl;
  }
  else
  {
    cout << "Number is not Harshed Number" << endl;
  }
  return 0;
}