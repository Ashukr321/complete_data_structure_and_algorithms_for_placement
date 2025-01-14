//preprocessor
#include<iostream>
using namespace std;

void removeCharacters(string &str,char ch){
  int i = 0;
  // we have methods str.erase
  while(str[i]!='\0'){
    if(str[i]==ch){
      str.erase(i,1);
    }
    else{
      i++;
    }
  }
}

//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;
  cin>>str;
  cout<<"Your string is "<<str<<endl;
  char ch;
  cout<<"Enter your character that you want to remove from string "<<endl;
  cin>>ch;
  removeCharacters(str,ch);
  cout<<"After remove char from string  "<< str<<endl;
  return 0;
}