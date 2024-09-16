//preprocessor
#include<iostream>
using namespace std;
int productOfNum(int n ){
  if(n==1){
    return 1;
  }
  return n* productOfNum(n-1);
}

//main start here ...
int main(){
   int n;
   cout<<"Enter your number :"<<endl;
   cin>>n;
   cout<<"product of the number  from n to 1  :"<< productOfNum(n)<<endl;
  return 0;
}