//preprocessor
#include<iostream>
using namespace std;


string reverseStr(string str,int size){
  // base case 
  if( size<=0){
    return "";
  }
  // recursive case
  return str[size-1]+ reverseStr(str,size-1);
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string :"<<endl;
  getline(cin,str);
  int size = str.length();
  cout<<"original string: "<<str<<endl;
  string rString = reverseStr(str,size);
  cout<<"Reverse string is :"<<reverseStr(str,size)<<endl;
  return 0;
}