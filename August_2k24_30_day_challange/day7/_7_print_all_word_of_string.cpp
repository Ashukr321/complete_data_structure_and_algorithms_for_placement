//preprocessor
#include<iostream>
#include <string>
#include <sstream>
using namespace std;

void printAllWord(string str){
  istringstream iss(str);
  string word;
  while(iss>>word){
    cout<<word<<endl;
  }
}

//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;  
  getline(cin,str);
  printAllWord(str);
  return 0;
}