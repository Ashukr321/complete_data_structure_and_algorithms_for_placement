// preprocessor
#include <iostream>
#include<cmath>
using namespace std;

bool isPrime(int num)
{
  if(num<=1){
    return false;
  }

  for (int i = 2; i <=sqrt(num); i++)
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
  cout << "Enter the number : ";
  cin >> num;

  if (isPrime(num))
  {
    cout << "The number is prime" << endl;
  }
  else
  {
    cout << "not prime number " << endl;
  }
  return 0;
}