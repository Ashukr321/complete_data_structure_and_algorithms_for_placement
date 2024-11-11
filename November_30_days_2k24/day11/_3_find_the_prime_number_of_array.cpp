//preprocessor
#include<iostream>
using namespace std;


bool isPrime(int n){
  if (n <= 1){
    return false;
  }
  for(int i = 2; i<n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size;i++)
  {
    int n ;
    cout<<"Enter the element at index: "<< i <<endl;
    cin>>n;
    arr[i]= n;
  }

  cout<<"The prime number of the array are :"<<endl;
  for (int i = 0; i < size;i++){
    if(isPrime(arr[i])){
      cout<<arr[i]<<", ";
    }
  }

  
  return 0;
}