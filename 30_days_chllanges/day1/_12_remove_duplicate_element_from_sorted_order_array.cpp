//preprocessor
#include<iostream>
#include<vector>
using namespace std;


void displayArray(vector<int> v){
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}

vector <int> removeDuplicate(vector<int> v){
  vector<int> result ;
  for (int i = 0; i < v.size(); i++)
  {
      if( i<v.size() && v[i] == v[i+1] ){
        continue;
      }
      result.push_back(v[i]);
  }
  return result;
  
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array : "<<endl;
  cin >>size;
  vector<int> v;
  for (int i = 0; i < size; i++)
  {
    int n; 
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    v.push_back(n);
  }
  cout<<"before removing the duplicate element from the vector"<<endl;
  displayArray(v);
  cout<<"After removing the duplicate element from the vector :"<<endl;
  vector<int > rmvector =  removeDuplicate(v);
  displayArray(rmvector);
  
  
  return 0;
}
