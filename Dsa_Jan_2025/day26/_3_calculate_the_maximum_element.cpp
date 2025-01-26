//preprocessor
#include<iostream>
using namespace std;
int findMax(int arr[],int n,int currentMax){
  if(n==0){
    return currentMax;
  }
  if(arr[n]>currentMax){
    currentMax = arr[n];
  }
  return findMax(arr,n-1,currentMax);
}

//main start here ...
int main(){
  int arr[] = {0,1,2,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"the maximum element of the array "<<findMax(arr,n, INT_MIN)<<endl;
  
  return 0;
}