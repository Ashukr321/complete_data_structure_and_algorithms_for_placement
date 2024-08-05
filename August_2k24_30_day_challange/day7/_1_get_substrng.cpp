//preprocessor
#include<iostream>
using namespace std;

string getSubstring(string str,int start,int end){
  return str.substr(start,end);
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string : "<<endl;
  getline(cin,str);
  cout<<getSubstring(str,2,3)<<endl;
  //  end index is included 
  return 0;
}