//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;


string sortStr(string str){
  string sortedStr;
  for(char c :str){
    if(isalnum(c)){
      sortedStr+=c;
    }
  }
  sort(sortedStr.begin(),sortedStr.end());
  return sortedStr;
 
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string:"<<endl;
  cin>>str;
  cout<<"Before sorting:"<<endl;
  cout<<str<<endl;
  cout<<"After sorting the string :"<<endl;
  cout<<sortStr(str)<<endl;
  return 0;
}