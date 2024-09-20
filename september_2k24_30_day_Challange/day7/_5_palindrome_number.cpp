//preprocessor
#include<iostream>
#include<math.h>
using namespace std;

int digitCount(int num){
  int cd = 0;
  while(num!=0){
    cd++;
    num  = num/10;
  }
  return cd;
}
bool isAutoMorphic(int num ){
  int digit = digitCount(num);
  int divisor = pow(10,digit);
  int squareOfNumber = num * num;
  int lastDigit = squareOfNumber% divisor;
  return num ==lastDigit;
}
//main start here ...
int main(){
    int num ; 
    cout<<"Enter your number :"<<endl;
    cin>>num;

    if(isAutoMorphic(num)){
      cout<<"The number is AutoMorphic"<<endl;
    }else {
      cout<<"The number is not AutoMorphic"<<endl;
    }
  return 0;
}