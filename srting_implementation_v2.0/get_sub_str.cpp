//preprocessor
#include<iostream>
using namespace std;

string getSubString(string str, int s , int e){
  string res;
  res = str.substr(s,e);
  return res;
}
//main start here ...
int main(){
  string str; 
  int s ,e;

  cout<<"Enter the  string :"<<endl;
  getline(cin,str);
  cout<<"Enter the starting of  the subString:"<<endl;
  cin>>s;
  cout<<"Enter the End index of the subString: "<<endl;
  cin>>e;
  cout<<getSubString(str,s,e)<<endl;
  return 0;
}