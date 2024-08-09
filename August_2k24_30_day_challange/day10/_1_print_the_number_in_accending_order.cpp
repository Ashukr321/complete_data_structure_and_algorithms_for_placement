//preprocessor
#include<iostream>
using namespace std;

void printNum(int n ){
   if(n==0){
    return ;
   }
  printNum(n-1);
  cout<<n<< " ";
}


//main start here ...
int main(){
  int num;
  cout<<"Enter your number num :"<<endl;
  cin>>num; 
  printNum(num);
  return 0;
}