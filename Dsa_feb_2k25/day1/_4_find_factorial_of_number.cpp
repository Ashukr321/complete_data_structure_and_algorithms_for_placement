//preprocessor
#include<iostream>
using namespace std;

int fact(int num){
  if(num==0){
    return 1;
  }
  if(num==1){
    return 1;
  }
  return num*fact(num-1);
}

//main start here ...
int main(){
  cout<<"Factorial "<< fact(5)<<endl;
  return 0;
}