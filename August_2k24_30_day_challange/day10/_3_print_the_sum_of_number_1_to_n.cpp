//preprocessor
#include<iostream>
using namespace std;

int sumOfNum(int num ){


  // base case 
  if(num==0){
    return 0;
  }
 return num+sumOfNum(num-1);
}
//main start here ...
int main(){
   int num;
   cout<<"Enter your number :"<<endl;
   cin>>num;
   cout<<"the sum of the number n to 1 : "<< sumOfNum(num)<<endl;
  
  return 0;
}