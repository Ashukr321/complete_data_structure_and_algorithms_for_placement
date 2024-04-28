//preprocessor
#include<iostream>

using namespace std;

int linearSearch (int arr[],int target  ){
  for (int i = 0; i <sizeof(arr)/sizeof(int); i++)
  {
      if(arr[i] == target){
        return i;
      }
  }
  return -1;
  
}

//main start here ...
int main(){
  int size ;
  int target;
  cout<<"enter the size of  the array  : "<<endl;
  cin>>size;
  
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ; 
    cout<<"Enter your element at index : "<<i<<endl;
    cin>>n;
    arr[i] = n;
  }

  cout<<"Enter your target element :"<<endl;
  cin>>target;

  int  result = linearSearch(arr,target);
  if(result == -1){
    cout<<"element is not found int the   array ! "<<endl;
  }else {
    cout<<"Element is present at index  :"<<result<<endl;
  }
  
  return 0;
}


/*

  linear search algorithm 
  linear search algorithm is the searching algorithm for finding an element in a list of elements. 

  worst case of time complexity of the linear search algorithm is o(n)  ⭐⭐ linear time complexity 
  best case of time complexity of the linear search algorithm is o(1)  ⭐⭐ complexity 

*/