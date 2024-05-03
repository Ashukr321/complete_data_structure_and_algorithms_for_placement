//preprocessor
#include<iostream>
using namespace std;

int kadane (int arr[],int size){
  int max_sub_sum = INT_MIN;
  
  for (int i = 0; i < size; i++)
  {
    int sum = 0;
    for (int j= i; j<size; j++)
    {
       sum+=arr[j];
    }
    if(max_sub_sum < sum){
      max_sub_sum = sum;
    }    
    
  }
  return max_sub_sum;
}
//main start here ...
int main(){

  int size ;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;

 int arr[size];

  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index : "<<i <<endl;
    cin>>n;
    arr[i] = n;
  }
  

  int maxSumSubarray = kadane(arr,size);
  cout<<"the maxium sub array sum :"<<maxSumSubarray<<endl;
  
  return 0;
}

/*
  brute force time complexity of the kadane's algorithm 
  time complexity =  o(n^2)
  [-2, 3, -1, 2, -1, 4, -5, 6]
*/