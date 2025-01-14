//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;

void reverseString(string  &str){
 for(int i = 0 ; i<str.length()/2 ; i++){
  swap(str[i],str[str.length()-i-1]);
 }
}

//main start here ...
int main(){
  string str;
  cout<<"Enter the string : ";
  cin>>str;
  reverseString(str);
  cout<<"Reverse string is : "<<str<<endl;

  return 0;
}