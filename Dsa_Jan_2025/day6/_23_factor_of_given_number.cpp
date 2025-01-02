// preprocessor
#include <iostream>
using namespace std;

void factors(int num)
{
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cout << i << " ";
    }
  }
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number : ";
  cin >> num;
  factors(num);

  return 0;
}