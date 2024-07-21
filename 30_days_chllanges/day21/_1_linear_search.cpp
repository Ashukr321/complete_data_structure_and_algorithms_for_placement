//preprocessor
#include<iostream>
using namespace std;



int linearSearch(int arr[],int size,int target){
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
  int size;
  cout<<"Enter the size of the  array : "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the element at index: "<<i <<endl;
    cin>> n ;
    arr[i] = n;
  }
  int target ;
  cout<<"Entre the target element: "<<endl;
  cin>>target;
  int indexElement = linearSearch(arr,size,target);
  if(indexElement !=-1){
    cout<<"The target element is at index: "<<indexElement<<endl;
  }else {
    cout<<"The target element is not found"<<endl;
  }
  
  return 0;
}