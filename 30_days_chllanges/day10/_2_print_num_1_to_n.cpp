//preprocessor
#include<iostream>
using namespace std;

void printNum(int n ){
  // base case 
  if( n==0){
    return;
  }
  // recursive case
  printNum(n-1);
  cout<<n<<" ";
}

//main start here ...
int main(){
  int n ;
  cout<<"Enter your number n :"<<endl;
  cin>>n;
  printNum(n);

  return 0;
}