//preprocessor
#include<iostream>
using namespace std;


int countArraySize(int arr[],int size){
  int cnt = 0;
  
  
  // base case 
  if(size==0){
    return 0;
  }
  return 1+ countArraySize(arr,size-1);
}
//main start here ...
int main(){
  int arr[]= {1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<" total number of element "<< countArraySize(arr,n)<<endl;
  return 0;
}