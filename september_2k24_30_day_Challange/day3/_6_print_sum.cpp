// preprocessor
#include <iostream>
using namespace std;

int printSum(int n)
{
  if(n<0){
    return 0;
  }
  int sum  = 0;
  sum += n + printSum(n-1); // recursive call 
  return sum;
}

// main start here ...
int main()
{
  cout<<printSum(5)<<endl;

  return 0;
}