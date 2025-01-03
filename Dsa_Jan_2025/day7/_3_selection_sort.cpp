// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[],int size){
  for(int i = 0; i<size-1;i++){
    int minIndex = i;
    for(int j = i+1; j<size; j++){
      if(arr[j]<arr[minIndex]){
        minIndex=j;
      }
      swap(arr[minIndex],arr[i]);
    }
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element : ";
    cin >> n;
    arr[i] = n;
  }
  cout<<"before selection sort "<<endl;
  printArray(arr, size);
  cout<<"After selection sort "<<endl;
  selectionSort(arr,size);
  printArray(arr, size);
  return 0;
}