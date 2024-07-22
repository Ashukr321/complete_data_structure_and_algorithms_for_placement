//preprocessor
#include<iostream>
using namespace std;

int maxElement(int arr[],int size) {
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if(arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}


//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array : "<<endl;
  cin>> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  int maxE =  maxElement(arr,size);
  cout<<"the maximum of the array : "<< maxE<<endl;

  
  return 0;
}