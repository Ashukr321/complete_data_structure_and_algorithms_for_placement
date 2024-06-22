//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ,";
  }
  
}
int linearSearch(int arr[],int size,int target){
  for (int i = 0; i < size; i++)
  {
    if( arr[i]==target){
      return i;
    }
  }
  
  return -1;
}

//main start here ...
int main(){
  int size;
  cout<<"Enter the  size of the array : "<<endl;
  cin>>size;
  int arr[size];
  int target ;
  cout<<"Enter the target element";
  cin>>target;

  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    arr[i]=n;
  }
  cout<<"The array is : "<<endl;
  printArray(arr,size);
  int targetElementIndex = linearSearch(arr,size,target);
  if(targetElementIndex==-1){
    cout<<"Target element not found in the array"<<endl;
  }else{
    cout<<"Target element found at index : "<<targetElementIndex<<endl;
  }
  
  return 0;
}