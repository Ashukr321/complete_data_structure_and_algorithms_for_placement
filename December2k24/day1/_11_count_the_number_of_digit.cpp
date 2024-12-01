//preprocessor
#include<iostream>
using namespace std;


int countDigit(int num ){
  int count = 0;
  while(num!=0){
    count++;
    num/=10;
  }
  return count;
}

//main start here ...
int main(){
  int num;
  cout<<"Enter the number : ";
  cin>>num;
  cout<<"Number of digits in the number "<<num<<" is "<<countDigit(num)<<endl;
  return 0;
}