//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

void bubbleSort(int arr[],int size){
  
  for(int i=0;i<size-1;i++){
    for (int j = 0; j < size-1-i; j++)
    {
       if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
    }
  }
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter  the element at index:"<< i<<endl;
    cin>>n;
    arr[i] = n;
  }
  cout<<"Before sorting the array : "<<endl;
  printArray(arr,size);
  cout<<endl;
  cout<<"After sorting the array :"<<endl;
  bubbleSort(arr,size);
  printArray(arr,size);

  
  

  return 0;
}