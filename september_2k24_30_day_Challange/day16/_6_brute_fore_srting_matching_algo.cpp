//preprocessor
#include<iostream>
using namespace std;


int bruteForceStrFirstOccurrence(string text,int n ,string pattern ,int m){
  for(int i = 0 ; i<n-m; i++){
    int j = 0; 
    while(j<n && pattern[j]==text[i+j]){
      j++;
    }
    if(j==m){
      return i;
    }
  }
  return -1;
}
//main start here ...
int main(){
  string text,pattern;
  cout<<"Enter  your text "<<endl;
  getline(cin,text);
  cout<<"Enter your pattern "<<endl;
  getline(cin,pattern);
  int n = text.length();
  int m = pattern.length();
  int  index = bruteForceStrFirstOccurrence(text,n,pattern ,m);
  if(index!=-1){
    cout<<"Pattern found at index "<<index<<endl;
  }else {
    cout<<"Pattern not found "<<endl;
  }
  return 0;
}