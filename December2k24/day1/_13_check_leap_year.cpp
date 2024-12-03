//preprocessor
#include<iostream>
using namespace std;

bool isLeap(int year){
  if(year%400 ==0 || year % 100 ==0|| year%4==0){
    return true;
  }
  return false;
}

//main start here ...
int main(){
  int year ;
  cout<<"Enter year: ";
  cin>>year;
  if(isLeap(year)){
    cout<<"Leap Year";
  }else{
    cout<<"Not a Leap Year";
  }
  return 0;
}