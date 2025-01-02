//preprocessor
#include<iostream>
using namespace std;



//main start here ...
int main(){
  int num ;
  cout<<"Enter the number : ";
  cin>>num;
  int sum = 0;
  for(int  i = 1; i<=num;i++){
    sum+=i;
  }
  cout<<"sum of first: "<<sum<<endl;

  return 0;
}