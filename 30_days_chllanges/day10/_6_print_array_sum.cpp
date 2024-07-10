//preprocessor
#include<iostream>
using namespace std;

 int printSum(int arr[],int n ){
  // base case 
  if(n<=0){
    return 0;
  }
  return arr[n-1]+printSum(arr,n-1);
 }


//main start here ...
int main(){
  int n ;
  cout<<"Enter  size of the array : "<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    int n ;
    cout<<"Enter element at "<< i<< " index"<<endl;
    cin>>n;
    arr[i] = n;
  }
  int sum =printSum(arr,n);
  cout<<"Sum of the array is : "<<sum<<endl;
  return 0;
}