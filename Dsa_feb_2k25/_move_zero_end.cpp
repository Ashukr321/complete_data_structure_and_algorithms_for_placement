//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int size){
  for(int i = 0 ; i<size; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

void moveZeroEnd(int arr[],int size){
  int count = 0; 
  for(int i = 0 ; i<size ; i++){
    if(arr[i]!=0){
      arr[count++]= arr[i];
    }
  }
  while(count<size){
    arr[count++]=0;
  }
}
//main start here ...
int main(){
  int arr[]= {0,1,3,0,12};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"Before move zero end "<<endl;
  printArray(arr,n);
  cout<<"After move zero end "<<endl;
  moveZeroEnd(arr,n);
  printArray(arr,n);
  return 0;
}