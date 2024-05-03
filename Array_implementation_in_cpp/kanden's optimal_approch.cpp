//preprocessor
#include<iostream>
using namespace std;


int kadansSum (int arr[],int size){
  long long sum = 0 ; 
  long long maxi = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    sum+=arr[i];

   if(sum>maxi){
    maxi =sum;
   }
    if(sum<0){
      sum=0;
    }
  }
  return maxi;
  
}

// time complexity of is : o(n);
//main start here ...
int main(){
  int size ;
  cout<<"Enter the size of the array ! "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
      int n ;
      cout<<"Enter the element at index : "<<i <<" ";
      
      cin>>n;
      arr[i] = n;
  }
  
  int kadaneSum = kadansSum(arr,size);
  cout<<"The max subarray sum is : "<<kadaneSum<<endl;
  return 0;
}