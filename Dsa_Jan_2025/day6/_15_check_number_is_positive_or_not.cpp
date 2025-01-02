//preprocessor
#include<iostream>
using namespace std;


bool isPosNeg(int num){
  if(num<0){
    cout<<"Negative"<<endl;
  }else if(num>0) {
    cout<<"Positive"<<endl;
  }else {
    cout<<"Zero"<<endl;
  }
}
//main start here ...
int main(){
  int num ;
  cout<<"Enter the number : ";
  cin>>num;
  isPosNeg(num);

  return 0;
}