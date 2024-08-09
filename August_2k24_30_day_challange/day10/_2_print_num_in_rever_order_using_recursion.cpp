//preprocessor
#include<iostream>
using namespace std;

void printNum(int num){
  if(num==0){
    return;
  }
  cout<<num<< " ";
  printNum(num-1);
}

//main start here ...
int main(){
  int num;
  cout<<"Enter your number num :"<<endl;
  cin>>num;
  printNum(num);
  return 0;
}