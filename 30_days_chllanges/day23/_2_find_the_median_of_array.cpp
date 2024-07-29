//preprocessor
#include<iostream>
using namespace std;


int findMedian(int arr[], int size) {
  if (size == 0) {
    return -1; // or some other error value
  }

  int middle = size / 2;
  if (size % 2 != 0) { // odd number of elements
    return arr[middle];
  } else { // even number of elements
    return (arr[middle - 1] + arr[middle]) / 2;
  }
}

//main start here ...
int main(){
  int size;
  cout<<"enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the element at index : "<<  i <<endl;
    cin>>n;
    arr[i] = n ;
  }
  cout<<findMedian(arr,size)<<endl;
  
  return 0;
}