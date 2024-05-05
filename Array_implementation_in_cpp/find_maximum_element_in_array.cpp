//preprocessor
#include<iostream>
using namespace std;

// o(n)
int MxElement (int arr[],int size){
  long long max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if(arr[i]>max){
      max= arr[i];
    }
  }
  return max;
  
}


//main start here ...
int main(){
  // o(1)
  int size ;
  cout<<"Enter the size of array: "<<endl;
  cin>>size;
  // o(1)
  int arr[size];

  //o(n)
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index : "<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  // o(1);
  int maxElement = MxElement(arr,size);
  cout<<"Maximum element in the array :"<<maxElement<<endl;
  return 0;
}