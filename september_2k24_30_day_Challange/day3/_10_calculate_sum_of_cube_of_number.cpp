//preprocessor
#include<iostream>
#include<math.h>
using namespace std;

int cubeOfNum(int n){
  if(n==1){
    return 1;
  }
  return pow(n,3)+cubeOfNum(n-1);
}
//main start here ...
int main(){
  int n;
  cout<<"Enter  your number :"<<endl;
  cin >> n;
  cout<<"the cube of the number :"<<cubeOfNum(n)<<endl;
  return 0;
}