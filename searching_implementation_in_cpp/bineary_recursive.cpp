//preprocessor
#include<iostream>
using namespace std;
int binarySearch (int arr[],int  low , int high , int target){
  if(low<=high){
    int mid  = (low+high)/2;
    if(arr[mid]==target){
      return mid;
    }

    if(arr[mid]<target){
    return binarySearch(arr,mid +1 , high , target);
    }
    return binarySearch(arr,low,mid-1,target);
  }
  return -1;
}

//main start here ...
int main(){
  int size, target;
  int low = 0;
  cout<<"Enter the size of the array : "<<endl;
   cin>> size;
   cout<<"Enter the target values : "<<endl;
   cin >>target;

  int arr[size];
  int high = size-1;
   cout<<"Enter all the element of the array  ! "<<endl;
   for (int i = 0; i < size; i++)
   {
    int n ; 
    cout<<"Enter your element at index  : "<<i<<endl;
    cin>>n;
    arr[i] = n;
   }

   int targetIndex = binarySearch(arr, low, high, target);
   if(targetIndex != -1){
    cout<<"Element is Preset at index of : "<<targetIndex<<endl;

   }else{
    cout<<target<<" is not found ! "<<endl;
   }

  return 0;
}