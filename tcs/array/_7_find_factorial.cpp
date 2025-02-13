//preprocessor
#include<iostream>
using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  if(n==1){
    return 1;
  }
  return n * factorial(n-1);
}
//main start here ...
int main(){
  cout<<factorial(5)<<endl;
  return 0;
}