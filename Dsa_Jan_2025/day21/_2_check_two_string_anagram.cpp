//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;


bool isAnagram(string str1,string str2){
  if(str1.length() != str2.length()){
    return false;
  }
  string filterString1,filterString2;
  for(char c:str1){
    if(isalnum(c)){
      filterString1 += tolower(c);
    }
  }
  for(char c:str2){
    if(isalnum(c)){
      filterString2 += tolower(c);
    }
  }
  sort(filterString1.begin(), filterString1.end());
  sort(filterString2.begin(),filterString2.end());
  return filterString1 == filterString2; 


}

//main start here ...
int main(){
  string str1,str2;
  cout<<"Enter the first string : ";
  cin>>str1;
  cout<<"Enter the second string : ";
  cin>>str2;
  if(isAnagram(str1,str2)){
    cout<<" wow your stirng is the anagram!"<<endl;
  }else {
    cout<<"sorry bhai  tum badhiya developer nhi ho "<<endl;
  }

  return 0;
}