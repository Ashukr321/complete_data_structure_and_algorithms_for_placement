//preprocessor
#include<iostream>
using namespace std;


int mElement (int arr[],int size){
  long long min  =INT_MAX;
  for (int i = 0; i < size; i++)
  {
     if(arr[i]<min){
      min = arr[i];
     }
  }
  return min;
  
}
//main start here ...
int main(){
  int size ;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at  index :"<<i <<endl;
    cin>>n;
    arr[i]= n;
  }

  int MinimumElement =mElement(arr,size);
  cout<<"Minimum element  "<<MinimumElement<<endl;
  
  return 0;
}