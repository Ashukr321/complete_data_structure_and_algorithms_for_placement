//preprocessor
#include<iostream>
using namespace std;


bool isPalindrome(int num ){
   int revNum = 0;
   int originalNum = num;
   while(num!=0){
    int digit = num % 10;
    revNum = revNum* 10+digit;
    num = num /10;
   }
    return revNum==originalNum;
}
//main start here ...
int main(){
  int num ;
  cout<<"Enter your number :"<<endl;
  cin>>num;
  if(isPalindrome(num)){
    cout<<"Number is palindrome"<<endl;
  }else {
    cout<<"Number is not palindrome"<<endl;
  }
  return 0;
}