//preprocessor
#include<iostream>
using namespace std;


void displayArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}
void swap(int* a , int * b){
  int temp  = * a; 
  * a = *a;
  *a = temp ;
}

void selectionSort(int arr[],int size){
  for(int i = 0 ; i<size-1; i++){
    int min = i;
    for (int j = i+1; j < size; j++)
    {
       if(arr[j]<arr[min]){
        min = j;
       }
    }
    swap(arr[min],arr[i]);
    
  }
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }

  
  cout<<"Before sorting the array :"<<endl;
  displayArray(arr,size);
  cout<<endl;
  cout<<"After sorting the array : "<<endl;
  selectionSort(arr,size);
  displayArray(arr,size);
  return 0;
}