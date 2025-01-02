//preprocessor
#include<iostream>
#include<cmath>
using namespace std;

int countDigit (int num ){
  int cnt = 0;
  while(num!=0){
    cnt++;
    num /= 10;
  }
  return cnt;
}

bool isArmStrongNumber(int num){
  int cd = countDigit(num);
  int sum = 0;
  int temp = num;
  while(num!=0){
    int digit  = num%10;
    sum+=pow(digit,cd);
    num /= 10;
  }
  return sum ==temp;
}

//main start here ...
int main(){
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  if(isArmStrongNumber(num)){
    cout<<num<<" is an armstrong number";
  }else {
    cout<<num<<" is not an armstrong number";
  }

  return 0;
}