//preprocessor
#include<iostream>
using namespace std;

bool isLeapYear(int year){
  if ((year % 4 == 0 && year % 100!= 0) || year % 400 == 0) {
    return true;
  } else {
    return false;
  }
}

//main start here...
int main(){
  int year;
  cout<<"Enter your year :"<<endl;
  cin>>year;
  if(isLeapYear(year)){
    cout<<"Entered year is a leap year: "<< year<<endl;
  }else {
    cout<<"Entered year is not a leap year: "<< year<<endl;
  }
  return 0;
}