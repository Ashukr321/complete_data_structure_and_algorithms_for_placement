//preprocessor
#include<iostream>
using namespace std;


int hcf(int a,int b){
  // base cae 
  if(b==0){
    return a;
  }
  return hcf(b,a%b);
}

//main start here ...
int main(){
  int a , b;
  cout<<"Enter the value of the a :"<<endl;
  cin>>a;
  cout<<"Enter the value of the b :"<<endl;
  cin>>b;
  cout<<"The HCF of the number is : "<<hcf(a,b)<<endl;
  return 0;
}