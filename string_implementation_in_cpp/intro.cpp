//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  string name = "Ashutosh kumar";
  reverse(name.begin(),name.end());
  cout<<name.length()<<endl;

  for ( auto it :name)
  {
    cout<<name<<endl;
  }
  
    cout<<name<<endl;
  return 0;
}