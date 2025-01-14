//preprocessor
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;


//main start here ...
int main(){
  map<int,int>m;
  m[1] = 10;
  m[2] = 20;
  m[3] = 30;
  m[4] = 40;
  // print 
  for(auto it : m){
    cout<<it.first<<" "<<it.second<<endl;
  }

  
  return 0;
}