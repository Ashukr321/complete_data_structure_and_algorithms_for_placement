//preprocessor
#include<iostream>
using namespace std;


void printArray(int arr[],int size){
  for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}


void moveNegativeOneSide(int arr[],int size){
  int j = 0;
  for(int i = 0; i<size;i++){
    if(arr[i]<0){
      swap(arr[i],arr[j]);
      j++;
    }
  }
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin >> size;
  int arr[size];
  for(int i = 0 ;i<size;i++){
    int n;
    cout<<"Enter the number of elements";
    cin >> n;
    arr[i] =n;
  }
  printArray(arr,size);
  moveNegativeOneSide(arr,size);
  printArray(arr,size);
  return 0;
}