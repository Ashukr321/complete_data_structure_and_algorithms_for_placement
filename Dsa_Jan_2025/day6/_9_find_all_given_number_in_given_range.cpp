//preprocessor
#include<iostream>
using namespace std;


bool isPalindrome(int num ){
  int temp = num ;
  int rev = 0;
  while(num !=0){
    int digit = num %10;
    rev = rev*10+digit;
    num = num/10;
  }
  return rev ==temp;
}
void printAllPalindromeNumber(int num1 ,int num2){
  for(int i = num1 ; i<=num2;i++){
    if(isPalindrome(i)){
      cout<<i<<" ,";
    }
  }
}
//main start here ...
int main(){
  int num1,num2;
  cout<<"Enter number 1 "<<endl;
  cin>>num1;
  cout<<"Enter number 2 "<<endl;
  cin>>num2;

  printAllPalindromeNumber(num1,num2);
  return 0;
}