//preprocessor
#include<iostream>
#include<vector>
using namespace std;


void findRepeating(int arr[],int size){
  // create the vector 
  vector<int>v;
  for(int i = 0; i<size;i++){
    if(arr[i]==arr[i+1]){
      v.push_back(arr[i]);
    }
  }
  // print the vector
  for(int i = 0; i<v.size();i++){
    cout<<v[i]<<" ";
  }
}

//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;  
  int arr[size];
  cout<<"Enter the element of the array :"<<endl;
  for(int i = 0 ; i<size; i++){
    int n ;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;

  }
  findRepeating(arr,size);
  
  return 0;
}