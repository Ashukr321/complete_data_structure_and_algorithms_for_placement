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
int lcm(int a ,int b ){
  return a*b/gcd(a,b);
}

//main start here ...
int main(){
  int a,b;
  cout<<"Enter your number "<<endl;
  cin>>a>>b;
  cout<<"Lcm of  enter your number "<<lcm(a,b)<<endl;

  return 0;
}