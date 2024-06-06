//preprocessor
#include<iostream>
#include<stack>
using namespace std;


//main start here ...
int main(){
  stack<int> s1;
  s1.push(12);
  s1.push(1);
  s1.push(2);
  s1.push(3);
  cout<<"this size of the  stack : "<<endl;
  cout<<s1.size()<<endl;
  //  remove the  element form the stack 
  s1.pop();

  cout<<"After removing the element from the top of the stack : "<<endl;
  cout<<s1.top()<<endl;
  cout<<s1.empty()<<endl; // this methods check the stack is empty or not 


  
  return 0;
}

//  