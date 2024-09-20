//preprocessor
#include<iostream>
using namespace std;

bool isPerfectNum(int num){
  int  sum= 0; 
   for(int i = 1; i<num-1; i++){
    if(num%i==0){
      sum+=i;
    }
   }
  // if(sum==num){
  //   return true;
  // }else{
  //   return false;
  // }
  return sum==num;
}
//main start here ...
int main(){
   int num ;
   cout<<"Enter your number : "<<endl;
   cin>>num;
   if(isPerfectNum(num)){
    cout<<"The number "<<num<<" is a perfect number."<<endl;
   }else {
    cout<<"The number "<<num<<" is not a perfect number."<<endl;
   }
  return 0;
}