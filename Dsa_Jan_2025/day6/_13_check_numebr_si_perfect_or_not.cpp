// preprocessor
#include <iostream>
using namespace std;

bool isPerfect(int num)
{
  int sum = 0;
  int temp = num;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }

  return sum == temp;
}
// main start here ...
int main()
{
  int num;
  cout << "enter the number : ";
  cin >> num;
  if (isPerfect(num))
  {
    cout << "perfect number" << endl;
  }
  else
  {
    cout << "not perfect number" << endl;
  }

  return 0;
}