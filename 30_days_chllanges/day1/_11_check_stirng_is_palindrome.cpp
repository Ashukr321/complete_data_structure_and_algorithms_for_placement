//preprocessor
#include<iostream>
using namespace std;


bool checkStringPalindrome(string str){
  int start = 0; 
  int end = str.length()-1;
  for ( ; start < str.length()/2; start++)
  {
     if(str[start]!=str[str.length()-1-start]){
      return false;
     }
  }
  return true;
  
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string "<<endl;
  cin>>str;
  if(checkStringPalindrome(str)){
    cout<<"String is palindrome"<<endl;
    cout<<str<<endl;
  }else{
    cout<<"String is not palindrome"<<endl;
  }

  return 0;
}