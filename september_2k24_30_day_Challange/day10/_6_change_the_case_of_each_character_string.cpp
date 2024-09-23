//preprocessor
#include<iostream>
using namespace std;

 string changeCase(string str){
  string result = "";
  for(char c: str){
    if(isalnum(c)){
      result+= toupper(c);
    }
  }
  return result;
 }
//main start here ...
int main(){
  string str;
  cout<<"Enter your string :"<<endl;
  cin>>str;
  cout<<changeCase(str)<<endl;
  return 0;
}