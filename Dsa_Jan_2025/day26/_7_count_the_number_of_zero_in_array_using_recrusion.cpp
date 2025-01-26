//preprocessor
#include<iostream>
using namespace std;


int countZero(int arr[],int size,int cz = 0){
  
  if(size ==0){

    return ++cz;
  }
  if(arr[size]==0){
    cz++;
  }
  countZero(arr,size-1,cz);
}
//main start here ...cks

int main(){
  int arr[] = {0,0,0,3,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"count zero "<< countZero(arr,n)<<endl;
  return 0;
}