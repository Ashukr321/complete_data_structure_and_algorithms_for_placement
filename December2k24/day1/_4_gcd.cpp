//preprocessor
#include<iostream>
using namespace std;


int gcd(int a,int b){
  // base case 
  if(b==0){
    return a;
  }
  return gcd(b,a%b);
}
//main start here ...
int main(){
  int a ,b;
  cout<<"Enter your number a :"<<endl;
  cin>>a;
  cout<<"Enter your number b :"<<endl;
  cin>>b;
  cout<<"the gcd of the Enter your number is :"<< gcd(a,b)<<endl;
  return 0;
}