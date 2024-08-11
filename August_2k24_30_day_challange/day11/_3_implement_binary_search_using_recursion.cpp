// preprocessor
#include <iostream>
using namespace std;


int binarySearch(int arr[],int target,int l,int h){
  while(l<=h){
    int mid = l+h/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]<target){
      return binarySearch(arr,target,mid+1,h);
    }else{
      return binarySearch(arr,target,l,mid-1);
    }
  }
  return -1;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the array element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  int l = 0;
  int h =size-1;
  int target;
  cout<<"Enter your target element that you want to search :"<<endl;
  cin>>target;
  if(binarySearch(arr,target,l,h)!=-1){
    cout<<"Element is present at index "<<binarySearch(arr,target,l,h)<<endl;
  }else {
    cout<<"Element is not present in array"<<endl;
  }
  return 0;
}