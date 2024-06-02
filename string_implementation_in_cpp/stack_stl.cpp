//preprocessor
#include<iostream>
#include<stack>
using namespace std;


//main start here ...
int main(){
  
  stack <int> s;
  stack <int> s2;
  s2.push(2);
  s.push(1);
  s.push(2);
  s.push(3);

  cout<<"top element of the stack is : "<<s.top()<<endl;
  cout<<"After pop some element"<<endl;
  s.pop();
  s.pop();
  cout<<"check  stack is empty of the stack "<<endl;
  cout<<s.empty()<<endl;
  
    cout<<"size of the stack : "<<endl;
  cout<<s.size()<<endl;
  s.swap(s2);
  cout<<"After  swap the stack : "<<endl;
  cout<<s.top()<<endl;

  return 0;
}

// time complexity of the stack to perform task in the stl cpp
