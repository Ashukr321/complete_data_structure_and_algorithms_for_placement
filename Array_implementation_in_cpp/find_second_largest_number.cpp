//preprocessor
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


//main start here ...
int main(){
  vector<int> v1 = {1,2,3,4,5};

  sort(v1.begin(),v1.end());

  if(v1.size()>=2){
    int secondLargestElement  = v1[v1.size()-2];
    cout<<"second Largest Number :"<<secondLargestElement<<endl;
  }else{
    cout<<"vector does't have enough element !"<<endl;
  }
}