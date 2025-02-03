//preprocessor
#include<iostream>
using namespace std;



//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0 ; i<size; i++){
    int n;
    cout<<"Enter the element at index:"<< i<<endl;
    cin>>n;
    arr[i] = n ;
  }
  
  
  return 0;
}