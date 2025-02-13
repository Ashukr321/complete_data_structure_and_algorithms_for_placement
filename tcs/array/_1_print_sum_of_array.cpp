//preprocessor
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  int sum = 0;
  for(int i = 0; i<size ; i++){
    sum +=arr[i];
     cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"the sum of the array "<< sum<<endl;
}

int linearSearch(int arr[],int n,int key){
  for(int i = 0 ; i<n ; i++){
    if(arr[i]==key){
      return i;
    }
    
  }
  return -1;
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the  size of the array "<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0 ; i<size ; i++){
    int n ;
    cout<<"Enter the  element at index "<< i <<endl;
    cin>>n;
    arr[i]=n;
  }

  printArray(arr,size);
  int target;
  cout<<"enter the element that u want to search "<<endl;
  cin>>target;
  int result = linearSearch(arr,size,target);
  if(result==-1)  {
    cout<<"element not found in the array"<<endl;
  }else{
    cout<<"element found at index "<<result<<endl;
  }
  return 0;
}