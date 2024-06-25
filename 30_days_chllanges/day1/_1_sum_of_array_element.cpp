//preprocessor
#include<iostream>
using namespace std;

int sumOfArray(int arr[],int size){
  int sum = 0; 
  for (int i = 0; i < size; i++)
  {
    sum+= arr[i];
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
   int n ;
   cout<<"Enter the element at index:  "<< i <<endl;
   cin>>n;
   arr[i] = n;
  }
  int totalElementSum = sumOfArray(arr,size);
  cout<<" the sum of the  element of the array : "<< totalElementSum<<endl;
  
  return 0;
}