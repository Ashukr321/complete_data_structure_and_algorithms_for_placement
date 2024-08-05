//preprocessor
#include<iostream>
#include<algorithm>

using namespace std;

string  sortString(string str){
  string result = str;
  sort(result.begin(),result.end());

  return result;
}

//main start here ...
int main(){
  string str;
  cout<<"Enter your string :"<<endl;
  getline(cin,str);
  cout<<"before sort the string:"<<endl;
  cout<<str<<endl;
  cout<<"after sorting the string"<<endl;
  cout<<sortString(str)<<endl;
  return 0;
}