//preprocessor
#include<iostream>
#include<map>
using namespace std;


void  calculateFrequency(string str){
  map<char,int>freqChar;
  for(int i = 0 ; i<str.length() ; i++){
    freqChar[str[i]]++;
  }
  // print frequency 
  for(auto it = freqChar.begin() ; it != freqChar.end(); it++){
    cout<<it->first<<" -> "<<it->second<<endl;
  }
}

//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;
  cin >> str;
  calculateFrequency(str);
  return 0;
}