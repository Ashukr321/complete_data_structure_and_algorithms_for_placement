// preprocessor
#include <iostream>
using namespace std;

bool isPrime(int num)
{
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
  return true;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter the number :" << endl;
  cin >> num;
  if (isPrime(num))
  {
    cout << "Number is prime number" << endl;
  }
  else
  {
    cout << "Number is not prime number" << endl;
  }

  return 0;
}