//preprocessor
#include<iostream>
using namespace std;

void maxMin(int num){
  int max = INT_MIN;
  int min = INT_MAX;
  while(num!=0){
    int digit = num %10;
    if(digit>max)
    {
      max = digit;
    }else if(digit<min){
      min = digit;
    }
    num = num/10;
  }
  cout<<"max : "<<max<<endl;
  cout<<"min : "<<min<<endl;
}

//main start here ...
int main(){
  int num ;
  cout<<"Enter your number :"<<endl;
  cin>>num;
  maxMin(num);
  return 0;
}