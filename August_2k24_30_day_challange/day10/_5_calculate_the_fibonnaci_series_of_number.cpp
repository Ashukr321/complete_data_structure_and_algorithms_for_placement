// preprocessor
#include <iostream>5

using namespace std;

int fibonacciOfNth(int n)
{
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }

  return fibonacciOfNth(n - 1) + fibonacciOfNth(n - 2);
}

// main start here ...
int main()
{
  int n;
  cout << "Enter the nth term of the fibonacci:" << endl;
  cin >> n;
  cout << "the fibonacci number of the nth position is : " << fibonacciOfNth(n) << endl;
  return 0;
}