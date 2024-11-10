//preprocessor
#include<iostream>
using namespace std;

int hcf(int a,int b){
  if(b==0){
    return a;
  }
  return hcf(b,a%b);
}


//main start here ...
int main(){

  int a,b;
  cout<<"Enter a:"<<endl;
  cin>>a;
  cout<<"Enter b:"<<endl;
  cin>>b;
  cout<<"HCF of "<<hcf(a,b)<<endl;
  return 0;
}