//preprocessor
#include<iostream>

using namespace std;

int binarySearch(int arr[],int l , int h , int target ){
  while(l<=h){
    int mid = (l+h)/2;
    if(arr[mid]==target){
      return mid;
    }else if(arr[mid]<target){
      return binarySearch(arr,mid+1,h,target);
    }else{
      return  binarySearch(arr,l,mid-1, target);
    }
  }
  return -1;

}

//main start here ...
int main(){

  int target;
  int arr[] = {1,2,3,4,4};
  cout<<"Enter the target element : "<<endl;
  cin>>target;
  int l = 0; int h = sizeof(arr)/sizeof(int);
  int elementIndex = binarySearch(arr,l , h , target);
  if(elementIndex !=-1){
    cout<<"Element is present at index:"<< elementIndex<<endl;
  }else{
    cout<<"Element is not found in the array "<<endl;
  }
  return 0;
}