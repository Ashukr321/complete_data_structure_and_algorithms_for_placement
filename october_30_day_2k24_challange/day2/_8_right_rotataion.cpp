//preprocessor
#include<iostream>
using namespace std;


void rightRotation(int arr[],int  n){
  int temp = arr[n-1];
  for(int i = n-1; i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]= temp;
}
//main start here ...
int main(){
  int arr[] = {1,2,3,4,5};
  rightRotation(arr,5);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<endl;
  }
  
  
  return 0;
}