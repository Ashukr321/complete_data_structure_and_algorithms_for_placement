//preprocessor
#include<iostream>
using namespace std;

int facrtorial(int n ){
  
  if(n<0){
    return -1;
  }
  if(n== 0){
    return 1;
  }
  
 return n*facrtorial(n-1);
}
// correct this  code

//main start here ...
int main(){
  int n ;
  cout<<"Enter you number"<<endl;
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<facrtorial(n)<<endl;
  return 0;
}