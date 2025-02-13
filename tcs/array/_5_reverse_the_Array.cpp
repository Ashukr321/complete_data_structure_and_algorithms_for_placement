//preprocessor
#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int size){
  for(int i = 0 ; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void reverseArray(int arr[],int size){
  int start = 0 ;
  int end = size-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}

//main start here ...
int main(){
  int arr[]= {1,2,3,4,5};
  printArray(arr,5);
  
  reverseArray(arr,5);
  printArray(arr,5);
  return 0;
}