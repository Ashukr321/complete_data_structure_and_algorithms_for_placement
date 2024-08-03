//preprocessor
#include<iostream>
using namespace std;

float areaOfCircle(int r){
  const double pi = 3.14;
  return pi*r*r;
}
//main start here ...
int main(){
  int  r ;
  cout<<"Enter the radius of the circle :"<<endl;
  cin>>r;
  cout<<"The area of the circle is  : "<<areaOfCircle(r)<<endl;
  return 0;
}