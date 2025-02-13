//preprocessor
#include<iostream>
using namespace std;


void moveZeroEnd(int arr[],int size){
  int count = 0; 
  
  for(int i = 0 ; i<size; i++){
    if(arr[i]!=0){
        arr[count++] = arr[i];
    } 
  }
  while(count<size){
    arr[count]= 0;
    count++;
  }

}

void printArray(int arr[],int size){
  for(int i=0 ; i<size ; i++){
    cout<<arr[i]<<""<<endl;
    
  
  }
  cout<<endl;
}

//main start here ...
int main(){
  int arr[] = {0,0,2,3,0,5,6};

  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Original array is "<<endl;
  printArray(arr,size);
  moveZeroEnd(arr,size);
  cout<<"Array after moving zeros to end is "<<endl;
  printArray(arr,size);

  
  return 0;
}