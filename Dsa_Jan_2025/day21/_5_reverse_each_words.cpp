//preprocessor

#include<iostream>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  string str;
  cout<<"Enter the string :"<<endl;
  getline(cin,str);
  cout<<"Before reverse :"<<str<<endl;
  cout<<str<<endl;
  reverse(str.begin(),str.end());
  cout<<str<<endl;
  return 0;
}