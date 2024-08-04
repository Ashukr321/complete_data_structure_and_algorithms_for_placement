//preprocessor
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



string removeChar(string str,char remove_char){
  string result = str;
  result.erase(remove(result.begin(),result.end(),remove_char),result.end());
  return result;
}
//main start here ...
int main(){
  string str = "Hello, World!";
  cout << removeChar(str, 'W') << endl;
  
  return 0;
}