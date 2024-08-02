//preprocessor
#include<iostream>
using namespace std;

bool isPrime(int num ){
  if(num<=1){
    return false;
  }
  for (int i = 2; i <= num/2; i++)
  {
    if(num%i==0){
      return false;
    }
  }
  return true;
}

//main start here ...
int main(){
  int num;
  cout<<"Enter your number "<<endl;
  cin>>num;
  if(isPrime(num)){
    cout<<"Number is prime"<<endl;
  }else {
    cout<<"Number is not prime"<<endl;
  }
  return 0;
}