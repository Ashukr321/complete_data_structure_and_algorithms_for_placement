//preprocessor
#include<iostream>
using namespace std;


int reverseDigit(int num){
  int reverse= 0;
  while(num>0){
    int rem = num%10;
    reverse = reverse*10+rem;
    num = num/10;
  }
  return reverse;
}
//main start here ...
int main(){
  int num ;
  cout<<"Enter the number : "<<endl;
  cin>>num;
  cout<<"Reverse number : "<<reverseDigit(num)<<endl;

  return 0;
}