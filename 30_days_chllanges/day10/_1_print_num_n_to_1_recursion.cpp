//preprocessor
#include<iostream>
using namespace std;

void printNum(int n ){

  // base case 
  if(n==0){
    return;
  } 
  //recursive case
  cout<<n<<" ";
  printNum(n-1);
}

//main start here ...
int main(){
  int n ;
  cout<<"Enter your number : "<<endl;
  cin>>n;
  printNum(n);

  return 0;
}