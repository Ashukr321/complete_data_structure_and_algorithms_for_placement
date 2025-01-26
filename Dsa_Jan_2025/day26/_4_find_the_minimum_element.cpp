//preprocessor
#include<iostream>
using namespace std;


int findMin(int arr[],int size,int min){
    if(size==0)
        return min;
    if(arr[size-1]<min)
        min = arr[size-1];
    return findMin(arr,size-1,min);
}
//main start here ...
int main(){
   int arr[] = {1,2,3,4,5,6,7,8,9};
   int size = sizeof(arr)/sizeof(arr[0]);
   cout<<"minimum element of the array :"<< findMin(arr,size,INT_MAX)<<endl;
  return 0;
}