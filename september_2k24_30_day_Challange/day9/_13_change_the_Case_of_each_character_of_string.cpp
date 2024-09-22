//preprocessor
#include<iostream>
using namespace std;

string changeCharCase(string str){
  string filterStr;
  for(char c:str){
    if(isalnum(c)){
      filterStr+= toupper(c);
    }
  }
  return filterStr;
}
//main start here ...
int main(){
   string str;
   cout<<"Enter your string :"<<endl;
   getline(cin,str);
    cout<<"before changing the case of the str char"<<endl;
    cout<<str<<endl;
    cout<<"After changing the case of the string "<<endl;
    cout << changeCharCase(str) << endl;
    return 0;
}