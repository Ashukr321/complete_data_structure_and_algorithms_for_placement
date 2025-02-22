// preprocessor
#include <iostream>
using namespace std;

bool isPerfect(int num)
{
  int sum = 0;
  int original = num;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  return sum == original;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (isPerfect(num))
  {
    cout << num << " is a perfect number." << endl;
  }
  else
  {
    cout << num << " is not a perfect number." << endl;
  }

  return 0;
}