// preprocessor
#include <iostream>
using namespace std;

int fibonacci(int n)
{
  // base
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter yor number nth position you want fibonacci number: " << endl;
  cin >> n;
  int fibNum =fibonacci(n);
  cout<<"the fibonacci number nth position : "<< fibNum<<endl;
  return 0;
}