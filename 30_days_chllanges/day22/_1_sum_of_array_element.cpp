//preprocessor
#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum+=arr[i];
  }
  return sum;  
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array : "<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the element at index  "<< i <<endl;
    cin>> n ;
    arr[i] = n;
  }

  int sum = sumArray(arr,size);
  cout<<"The sum of the array is : "<<sum<<endl;
  
  
  return 0;
}