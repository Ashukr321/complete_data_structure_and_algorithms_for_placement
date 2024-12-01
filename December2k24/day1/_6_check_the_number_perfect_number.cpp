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
  return sum == num;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  if (isPerfectNum(num))
  {
    cout << "Perfect Number" << endl;
  }
  else
  {
    cout << "Not Perfect Number" << endl;
  }
  return 0;
}