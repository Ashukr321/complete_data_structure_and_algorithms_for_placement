//preprocessor
#include<iostream>
using namespace std;

int gcd(int a,int b){
  // base case 
  if(b==0){
    return a;
  }
  //recursive call
  return gcd(b,a%b);
}

//main start here ...
int main(){
  int a,b;
  cout<<"Enter the value of a and b : ";
  cin>>a>>b;
  cout<<"gcd of the two number "<< gcd(a,b)<<endl;
  return 0;
}