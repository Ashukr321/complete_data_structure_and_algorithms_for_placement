//preprocessor
#include<iostream>
using namespace std;


int oddSum(int n ){
  // base case 
  if( n==1){
    return 1;
  }
  return n+oddSum(n-2);
}

//main start here ...
int main(){
  
  int n;
  cout<<"Enter odd number"<<endl;
  cin>>n;
  int total = oddSum(n);
  cout<<"Sum of odd numbers is "<<total<<endl;
  return 0;
}