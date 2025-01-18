//preprocessor
#include<iostream>
using namespace std;


// reverse string usin recursion 
string reverseString(string str){
  if(str.length()==0){
    return str;
  }
  return  reverseString(str.substr(1))+str[0];
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string: "<<endl;
  cin>>str;
  cout<<"You entered: "<<str<<endl;
  cout<<"Reverse of the string is: "<<endl;
  cout<<reverseString(str)<<endl;
  
  return 0;
}