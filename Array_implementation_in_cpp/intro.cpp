// preprocessor
#include <iostream>
using namespace std;


void printArray(int arr[],int n){
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
}



// main start here ...
int main()
{

  int size; 
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n ;
    cout<<"Enter the element at index : "<<i <<endl;
    cin>>n;
    arr[i] = n;

  }

  printArray(arr,size);
  
  return 0;
}

/*
  array  in the cpp
  array store the data in the  contiguous memory  allocation
  array is the linear data structure
  index is started from the  0
  access the data of the array will be taken o(1)
  searching  will take o(n)
  array are use to  represent matrix in the mathematical

  stack and queue are also implemented by the help of the array
  array can also use to represent the graph data  structure
  each  element in the  array represent the node of the array
   in dp   array is also use to store the  intermidiate  result  of the subproblem in  order to solve the larger problems


*/