//preprocessor
#include<iostream>
using namespace std;

int factorial(int n){
  //  base case 
  if(n==0 || n==1){
    return 1;
  }
  return n * factorial(n-1);
}
//main start here ...
int main(){
  int n;
  cout << "Enter a number : ";
  cin >> n;
  cout << "Factorial of " << n << " is " << factorial(n) << endl;
  return 0;
}