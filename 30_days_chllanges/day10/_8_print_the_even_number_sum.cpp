#include <iostream>
using namespace std;

int evenSum(int n, int sum = 0)
{
  // base case 
  if(n<0){
    return -1;
  }
  //
  if(n==0){
    return sum;
  }

  if(n%2==0){
    sum += n;
  }
  
  // recursive case
  return evenSum(n-1, sum);
}

// main start here ...
int main()
{
  cout<<"even sum "<< evenSum(10)<<endl;
 
  return 0;
}