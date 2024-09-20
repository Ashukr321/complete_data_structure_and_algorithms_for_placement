//preprocessor
#include<iostream>
using namespace std;

int countDigit(int num){
  int cd = 0;
  int   sum = 0;
  while(num!=0){
    cd++;
    int digit = num%10;
    sum+= digit;
    num = num/10;
  }
  cout<<"the sum of digit :"<<sum<<endl;
  return cd;
}
//main start here ...
int main(){
  cout<<countDigit(234334)<<endl;
  return 0;
}