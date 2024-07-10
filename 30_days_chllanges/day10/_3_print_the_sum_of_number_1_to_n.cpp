//preprocessor
#include<iostream>
using namespace std;


int printSum(int n ){
  int sum =0;
  //base case 
  if(n==0){
    return 0;
  }
  sum+=n+printSum(n-1);
  return sum;
}
//main start here ...
int main(){
  int n ;
  cout<<"Enter your number  n:"<<endl;
  cin>>n;
  int total = printSum(n);
  cout<<"the total sum of the number : "<< total<<endl;
  return 0;
}