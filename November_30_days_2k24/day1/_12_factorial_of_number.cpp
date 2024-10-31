// preprocessor
#include <iostream>
using namespace std;

int factorialNum(int n)
{
  // base case
  if (n == 1 || n == 0)
  {
    return 1;
  }
   return n * factorialNum(n - 1);
}
// main start here ...
int main()
{
  int n;
  cout<<"Enter your number n :"<<endl;
  cin>>n;

  cout << "Factorial of the number :" << factorialNum(n) << endl;
  return 0;
}