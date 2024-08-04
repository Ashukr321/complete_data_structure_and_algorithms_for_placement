//preprocessor
#include<iostream>
using namespace std;

string reveseStr(string str){
  string result ;
  for(int i =str.length()-1; i>=0;i--){
    result = result + str[i];
  }
  return result;
}
//main start here ...
int main(){
  string str ;
  cout<<"Enter a string: ";
  getline(cin,str);
  cout<<"Reversed string is: "<<reveseStr(str)<<endl;
  
  return 0;
}