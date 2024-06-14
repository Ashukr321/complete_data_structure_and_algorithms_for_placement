//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  string  str = "ashutosh kumar ";
  cout<<"string before reversing: "<< str<<endl;
  reverse(str.begin(),str.end());
  cout<<"stirng after reversing : "<< str <<endl;
  return 0;
}

// reverse methods is provided by the algorithms 
// we have to pass the pointer of the start and end  
// str.begin() , str.end();

