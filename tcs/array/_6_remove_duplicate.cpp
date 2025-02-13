//preprocessor
#include<iostream>
#include<vector>
#include<set>
using namespace std;


void removeDuplicates(vector<int> &v){
  set<int>uniqueElement(v.begin(),v.end());   
  v.assign(uniqueElement.begin(),uniqueElement.end());
}
//main start here ...
int main(){
    vector<int>v = {1,2,3,1,2,3};
    removeDuplicates(v);
    cout<<"After remove duplicate"<<endl;
    for(int i = 0 ; i<v.size();i++){
      cout<<v[i]<<endl;
    }
  return 0;
}