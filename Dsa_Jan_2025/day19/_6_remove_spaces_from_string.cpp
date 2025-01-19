//preprocessor
#include<iostream>
using namespace std;


string removeSpaces(string str){
  string result = "";
  for(int i = 0;i<str.length();i++){
    if(str[i]==' '){
      continue;
    }else{
     result+=str[i];
    }
  }
  return result;
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;
  getline(cin,str);
  cout<<str<<endl;
  cout<<"After removing spaces from string "<<endl;
  
  cout<<removeSpaces(str)<<endl;

  return 0;
}