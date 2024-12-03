//preprocessor
#include<iostream>
using namespace std;

int replacezerowithone(int num){
  int result = 0;
  int multiplier = 1;
  while(num!=0){
    int digit = num%10;
    if(digit==0){
      digit = 1;
    }
    result = result+ digit *multiplier;
    multiplier = multiplier*10;
    num =num/10;
  }
  return result;

}

//main start here ...
int main(){
  int num = 2002;
  cout<<replacezerowithone(num);
  return 0;
}