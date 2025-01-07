//preprocessor
#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
  int low = 0; 
  int high = size-1;
  while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]<key){
      low = mid+1;
    }else {
      high = mid-1;
    }
  }
  return -1;
}


//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0 ; i<size;i++){
    int n ;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i]=n;
  }
  int index = binarySearch(arr,size,5);
  if(index!=-1){
    cout<<"Element found at index "<<index<<endl;
  }else {
    cout<<"Element not found"<<endl;
  }
  return 0;
}