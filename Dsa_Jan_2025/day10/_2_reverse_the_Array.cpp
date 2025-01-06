//preprocessor
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void reverseArray(int arr[],int size){
  for(int i = 0; i<size/2; i++){
    swap(arr[i],arr[size-i-1]);
  }
}

//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :";
  cin>>size;
  int arr[size];
  for(int i = 0; i<size;i++){
    int n ;
    cout<<"Enter the element of the array :";
    cin>>n;
    arr[i] = n;
  }
  printArray(arr,size);
  reverseArray(arr,size);
  printArray(arr,size);

  return 0;
}