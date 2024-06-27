//preprocessor
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isBalance(string &str){
  stack<char> s;
  for(char ch : str){
    if(ch=='('||ch=='{'|| ch=='['){
      s.push(ch);
    }else if(ch==')'|| ch=='}'|| ch==']'){
      if(s.empty()){
        return false;
      }
      char top = s.top();
      s.pop();
      if(ch==')' && top != '(' || ch=='}' && top!='{' || ch==']' &&top!='[' ){
        return false;
      }
    }
  }
  return s.empty();
}

//main start here ...
int main(){
  string expression ;
  cout<<"Enter your expression"<<endl;
  cin>>expression;
  if(isBalance(expression)){
    cout<<"Your expression is balanced"<<endl;
  }else {
    cout<<"Your expression is not balanced"<<endl;
  }

  
  return 0;
}