//preprocessor
#include<iostream>
#include<map>
#include<sstream>
using namespace std;

void largest_words(string str){
  map<string,int>mp;
  string word="";
  stringstream ss(str);
  while(ss>>word){
    mp[word]++;
  }
  int max = 0;
  string maxLengthword;
  for(auto it = mp.begin(); it != mp.end();it++){
    if(it->first.length() > max){
      max = it->first.length();
      maxLengthword = it->first;
    }
  }
  cout<<"max length words "<<" -> "<< maxLengthword<<endl;

}


//main start here ...
int main(){
  string str;
  cout<<"Enter the string : ";
  getline(cin,str);
  largest_words(str);
  return 0;
}