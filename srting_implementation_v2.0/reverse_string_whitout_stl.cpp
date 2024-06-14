//preprocessor
#include<iostream>
using namespace std;



string reverseStr(string str){
  string result ; 
  for(int i =str.length()-1; i>=0; i--){
    result+=str[i];
  }
  return result;
}
//main start here ...
int main(){
  string str; 
  cout<<"Enter your string :"<<endl;
  getline(cin,str);

  cout<<"before reversing the string : "<<endl;
  cout<<str<<endl;
  string str1 = reverseStr(str);
  cout<<"After reversing the string :"<<endl;
  cout<<str1<<endl;
  return 0;
}