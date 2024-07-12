//preprocessor
#include<iostream>
using namespace std;

// recursive function to check the array is sorted or not 
bool isSorted(int arr[],int index,int size){
  // base case 
  if(index==size-1){
    return true;
  }
  return arr[index]<arr[index+1] && isSorted(arr,index+1,size);
}

void printArray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array : "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the  element at index: "<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  cout<<"Display the array element : "<<endl;
  printArray(arr,size);

  cout<<endl;
  if(isSorted(arr,0,size)){
    cout<<"The array is sorted"<<endl;
  }else {
    cout<<"The array is not sorted"<<endl;
  }

  
  return 0;
}