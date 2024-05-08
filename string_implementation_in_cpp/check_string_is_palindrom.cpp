//preprocessor
#include<iostream>
using namespace std;

bool isPlindrome( string str ){
  for (int i = 0; i < str.length()/2; i++)
  {
     if(str[i] !=str[str.length()-1-i]){
      return false;
     }
  }
  
  return true;
}

//main start here ...
int main(){
  string str ; 
  
  cout<<"Enter our  stirng "<<endl;
  cin>>str;
  if(isPlindrome(str)){
    cout << "The given string is a palindrome string  " <<endl;
  }
  else{
    cout<<"Enter your string is not a palindrome  stirng "<<endl;
  }
  
  return 0;
}