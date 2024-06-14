#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkAnagram(string str1, string str2){
  string filterStr1,filterStr2;
  for (char c : str1)
  {
    if(isalnum(c)){
      filterStr1+=tolower(c);
    }
  }

  for(char c : str2){
    if(isalnum(c)){
      filterStr2+=tolower(c);
    }
  }

  sort(filterStr1.begin(),filterStr1.end());
  sort(filterStr2.begin(),filterStr2.end()); // Corrected here
  return filterStr1 == filterStr2;

}



int main(){
  string str1, str2; 
  cout<<"Enter the string str1: ";
  cin>>str1;
  cout<<"Enter the string str2: ";
  cin>>str2;
  if(checkAnagram(str1,str2)){
    cout<<"Your strings are anagrams."<<endl;
  }else{
    cout<<"Your strings are not anagrams."<<endl;
  }
  return 0;
}