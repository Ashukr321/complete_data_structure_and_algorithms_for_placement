//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<"  ";
  }
}

void moveZeroEnd(int arr[],int size){
  int count =0;
  for (int i = 0; i < size; i++)
  {
    if(arr[i] !=0){
      arr[count] = arr[i];
      count++;
    }
  }
  while(count<size){
    arr[count] = 0;
    count++;
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
    int n;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  cout<<"before moving  zero end"<<endl;
  printArray(arr,size);
  cout<<"After moving zero end :"<<endl;
  moveZeroEnd(arr,size);
  printArray(arr,size);


  
  return 0;
}