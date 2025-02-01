//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;


void reverseStr(string &str){
  for(int i = 0 ; i<str.length()/2 ; i++){
    swap(str[i] , str[str.length()-1-i]);
  }
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string"<<endl;
  cin>>str;
  cout<<"Your string is "<<str<<endl;
  cout<<"After reverse your string "<<endl;
  reverseStr(str);
  cout<<str<<endl;
  return 0;
}