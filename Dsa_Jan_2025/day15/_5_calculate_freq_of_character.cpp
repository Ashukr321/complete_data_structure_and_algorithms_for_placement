//preprocessor
#include<iostream>
#include<map>
using namespace std;


void calculate_freq(string str){
  map<char,int>freqMap;
  for(int i = 0 ; i<str.length();i++){
    freqMap[str[i]]++;
  }
  // for each loop
  for(auto it : freqMap){
    cout<<it.first<<"-> "<<it.second<<endl;
  }
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;
  cin>>str;
  calculate_freq(str);
  return 0;
}