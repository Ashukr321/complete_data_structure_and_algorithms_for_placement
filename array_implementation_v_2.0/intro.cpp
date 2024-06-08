//preprocessor
#include<iostream>
using namespace std;


int linearSearch(int arr[],int target,int size){
  for (int i = 0; i < size; i++)
  {
     if(arr[i] ==target){
      return i;
     }
  }
  return -1;
  
}
//main start here ...
int main(){
  int target ; 
  int arr[] = {2,2,3,4};
  cout<<arr[2]<<endl;
  cout<<"Enter the  target element: "<<endl;
cin>>target;
  int targetElementIndex = linearSearch(arr,target,4);
  if( targetElementIndex!=-1){
    cout<<"Element is found at the index: "<<targetElementIndex<<endl;
  }else {
    cout<<"Element is not present !"<<endl;
  }
  return 0;
}
// array store the data in the sequence with the homogenous data types only 
