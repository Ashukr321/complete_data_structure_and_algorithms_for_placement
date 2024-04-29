// preprocessor
#include <iostream>
using namespace std;

int binarySearch (int arr[], int target,int size){
  int l=  0; 
  int h = size - 1;
  while(l<=h){
    int mid  = (l+h)/2;
    if(arr[mid]==target){
      return mid;
    }
    if(arr[mid]<target){
      l= mid+1;
    } else{
      h= mid+1;
    }
  }
  return  -1;
}

// main start here ...
int main()
{

 // create the   variables 
  int size;
  int target;
  // take the  size of the array 
  cout << "Enter the size of the  array : " << endl;
  cin >> size;
  // take the target  element that we want to search  it 
  cout << "Enter the target Element : " << endl;
  cin >> target;

  int arr[size];// create the array dynamically 


  cout<<"Enter all the  element in the sorted manner ! "<<endl;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index :" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int targetIndex = binarySearch(arr, target,size);
  if(targetIndex!=-1){
    cout<<"Target value is found at index : "<<targetIndex<<endl;
  }else{
    cout<<"Enter your target value is not Found ! "<<endl;
  }
  return 0;
}

/*
  binary search Algorithms
   time complexity of the binary search algorithm is > O(logn)
    array must be in sorted order
*/