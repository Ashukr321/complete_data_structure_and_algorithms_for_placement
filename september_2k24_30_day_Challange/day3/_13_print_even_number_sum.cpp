// preprocessor
#include <iostream>
using namespace std;

int evenNumSum(int n)
{

  if (n <= 0)
  {
    return 0;
  }
  else if (n % 2 == 0)
  {

    return n + evenNumSum(n - 2);
  }
  else
  {
    return evenNumSum(n - 1);
  }
}

// main start here ...
int main()
{
  int n;
  cout << "Enter your number: ";
  cin >> n;
  cout << "The sum of even numbers up to " << n << " is: " << evenNumSum(n) << endl;
  return 0;
}