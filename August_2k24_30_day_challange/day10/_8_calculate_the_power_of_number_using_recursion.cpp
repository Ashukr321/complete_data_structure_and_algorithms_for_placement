//preprocessor
#include<iostream>
using namespace std;


int sumOfPowerOfNum(int num){
  if(num==1){
    return 1;
  }
  return num*num+sumOfPowerOfNum(num-1);
}

//main start here ...
int main(){
  int num;
  cout<<"Enter your number"<<endl;
  cin>>num;
  cout<<"the sum of the power of the number :"<< sumOfPowerOfNum(num)<<endl;
  return 0;
}