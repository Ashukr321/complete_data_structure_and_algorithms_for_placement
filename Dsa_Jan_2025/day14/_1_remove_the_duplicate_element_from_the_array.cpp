//preprocessor
#include<iostream>
using namespace std;

void printArray(int arr[],int size){
  for(int i  = 0 ; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


void removeDuplicates(int arr[],int *size){
  int newSize = 0; 
  for(int i = 0 ; i<*size; i++){
    if(arr[i]!=arr[i+1]){
      arr[newSize] = arr[i];
      newSize++;
    }
  }
  *size = newSize;
}

//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0; i<size; i++){
    int n ;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  cout<<"before remove duplicate element from sorted array "<<endl;
  printArray(arr,size);

  removeDuplicates(arr,&size);
  cout<<"after remove duplicate element from sorted array "<<endl;
  printArray(arr,size);
  return 0;
}