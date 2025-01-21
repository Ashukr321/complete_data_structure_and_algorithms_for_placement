//preprocessor
#include<iostream>
using namespace std;

string removeSpace(string str){
  string temp = "";
  for(int i=0;i<str.length();i++){
    if(str[i] != ' '){
      temp += str[i];
    }
  }
  return temp;
}


//main start here ...
int main(){
  string str;
  cout<<"Enter the string : ";
  getline(cin,str);
  cout<<"Before removing space : "<<str<<endl;
  str = removeSpace(str);
  cout<<str<<endl;
  return 0;
}