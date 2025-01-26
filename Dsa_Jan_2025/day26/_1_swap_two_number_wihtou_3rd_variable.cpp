//preprocessor
#include<iostream>
using namespace std;


//main start here ...
int main(){
  int a=10,b=20;
  cout<<"Before swap a="<<a<<" b="<<b<<endl;
  a= a+b;
  b= a-b;
  a = a-b;
  cout<<"After swap a="<<a<<" b="<<b<<endl;
  return 0;
}