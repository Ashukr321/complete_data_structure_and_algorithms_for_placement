// preprocessor
#include <iostream>
using namespace std;

bool isPerfectNum(int num)
{
  int sum = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  return num == sum;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isPerfectNum(num))
  {
    cout << num << " is a perfect number" << endl;
  }
  else
  {
    cout << num << " is not a perfect number" << endl;
  }
  return 0;
}