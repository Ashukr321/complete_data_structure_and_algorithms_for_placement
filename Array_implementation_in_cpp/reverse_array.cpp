//preprocessor
#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
  for (int i = 0; i < size/2; i++)
  {
      int temp = arr[i];
      arr[i] = arr[size-1-i];
      arr[size-1-i] = temp;
  }
  
}
void printArray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
}
//main start here ...
int main(){
  int size ;
  cout<<"Enter the size of the array : "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
     cout<<"Enter the  element at index : "<< i <<endl;
     cin>>n;
     arr[i]= n;
  }
  cout<<"Before reverse"<<endl;
  printArray(arr,size);
  cout<<endl;
  reverseArray(arr,size);
  cout<<"After reverse"<<endl;
  printArray(arr,size);

  
  return 0;
}

/*
 time complexity of the reverse the array is o(n)
 // linear time complexity  
*/