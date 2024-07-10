//preprocessor
#include<iostream>
using namespace std;

bool isPalindrome(string str,int start,int end){
  // base case
  if(start>=end){
    return true;
  }
  if(str[start ]!=str[end]){
    return false;
  }
  return isPalindrome(str,start+1,end-1);
}
//main start here ...
int main(){
  string str;
  cout<<"Enter your string: "<<endl;
  getline(cin,str);
  bool ans = isPalindrome(str,0,str.length()-1);
  if(ans){
    cout<<"String is palindrome"<<endl;
  }else {
    cout<<"String is not palindrome"<<endl;
  }
  return 0;
}