//preprocessor
#include<iostream>
using namespace std;


int factOfNum(int num ){
  
  if(num==1){
    return 1;
  }
  return num*factOfNum(num-1);
}

//main start here ...
int main(){
  int num;
  cout<<"Enter the number "<<endl;
  cin>>num;
  cout<<"factorial of the number : "<< num <<"  -> "<< factOfNum(num)<<endl;
  return 0;
}