// preprocessor
#include <iostream>
using namespace std;

void leftRotation(int arr[], int size)
{
  int temp = arr[0];
  for (int i = 0; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[size - 1] = temp;
}

// main start here ...
int main()
{

  int arr[] ={1,2,3,4,5};
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  leftRotation(arr,5);
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}