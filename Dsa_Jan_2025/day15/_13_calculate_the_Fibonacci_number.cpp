// preprocessor
#include <iostream>
using namespace std;

int Fibonacci(int n)
{
  // base case
  if (n == 0)
  {
    return 0;
  }else if(n==1){
    return 1;
  }
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the number : ";
  cin >> n;

  cout << "Fibonacci of nth element " << Fibonacci(n) << endl;
  return 0;
}