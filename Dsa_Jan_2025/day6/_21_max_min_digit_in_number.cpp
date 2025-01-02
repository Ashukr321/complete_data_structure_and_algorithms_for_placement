//preprocessor
#include<iostream>
using namespace std;

void max_min_digit(int num){
  int max = INT_MIN;
  int min = INT_MAX;
  while(num!=0){
    int digit = num%10;
    if(digit>max){
      max = digit;
    }else {
      min = digit;
    }
    num= num/10;
  }
  cout<<"max digit :"<< max<<endl;
  cout<<"min digit :"<< min<<endl;
}

//main start here ...
int main(){

  int num ;
  cout<<"Enter your number "<<endl;
  cin >> num;
  max_min_digit(num);

  return 0;
}