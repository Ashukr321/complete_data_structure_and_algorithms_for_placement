//preprocessor
#include<iostream>
using namespace std;

int reverseDigit(int num ){
  int rev = 0;
  while(num!=0){
    int rem= num%10;
    rev = rev*10+rem;
    num = num/10;
  }
  return rev;
}

//main start here ...
int main(){
  int num;
  cout<<"enter your number: ";
  cin>>num;
  cout<<"Before reverse the number "<<endl;
  cout<<num<<endl;
  cout<<"After reverse the number "<<endl;
  cout<<reverseDigit(num)<<endl;
  return 0;
}