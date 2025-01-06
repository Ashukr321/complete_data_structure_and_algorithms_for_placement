//preprocessor
#include<iostream>
using namespace std;

int findMedian(int arr[], int size){
  int median;
  if(size%2==0){
    // even size
    // 1 2 3 4 5 6  size = 6
   return median = (arr[size/2] + arr[size/2 -1])/2;
  }else {
    // odd size
   return median = arr[size/2];
  }
}

//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array : ";
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    int n ; 
    cout<<"Enter the element ";
    cin>>n;
    arr[i]=n;
  }
  cout<<"Median of the array is : "<<findMedian(arr,size);


  return 0;
}