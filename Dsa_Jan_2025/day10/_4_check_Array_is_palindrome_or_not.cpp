//preprocessor
#include<iostream>
using namespace std;


bool isPalindrome(int arr[],int size){
  if(size<=0){
    return false;
  }
  for(int i= 0 ; i<size/2; i++){
    if(arr[i]!=arr[size-i-1]){
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
  cout<<"Enter the elements of the array :"<<endl;
  for(int i = 0 ; i<size; i++){
    int n ;
    cout<<"Enter the element :"<<endl;
    cin>>n;
    arr[i] = n;
  }
  if(isPalindrome(arr,size)){
    cout<<"The array is a palindrome"<<endl;
  }else {
    cout<<"The array is not a palindrome"<<endl;
  }
  return 0;
}