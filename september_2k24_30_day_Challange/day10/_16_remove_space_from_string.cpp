//preprocessor
#include<iostream>
using namespace std;


string removeSpace(string str){
  string newStr;
  for(int i = 0; i<str.length();i++){
    if(str[i]==' '){
      continue;
    }
    else{
      newStr+=str[i];
    }
  }
  return newStr;
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string:"<<endl;
  getline(cin,str);
  cout<<"Before removing the space:"<<endl;
  cout<<str<<endl;
  cout<<"After removing the space from the string :"<<endl;
 cout<< removeSpace(str)<<endl;

  return 0;
}