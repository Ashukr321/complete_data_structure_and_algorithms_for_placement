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

void bubbleSort(int arr[],int size){
  for(int i = 0 ; i<size-1; i++){
    for(int j = 0 ; j<size-1-i; j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
}

void insertionSort(int arr[],int size){
  for(int i = 1 ; i<size;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
      arr[j+1]  = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}


// selection sort
void selectionSort(int arr[],int size){
  for(int i = 0 ; i<size; i++){
    int minIndex = i ;
    for(int j = i+1; j<size; j++){
      if(arr[j]<arr[minIndex]){
        minIndex= j;
      }
    }
    swap(arr[i],arr[minIndex]);
    
    
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before bubble sort " << endl;
  printArray(arr, size);
  cout<<"After bubble sort "<<endl;
  bubbleSort(arr,size);
  printArray(arr,size);

  cout<<endl;

  cout<<"After insertion sort "<<endl;
  insertionSort(arr,size);
  printArray(arr,size);

  cout<<endl;

  cout<<"After selection sort "<<endl;
  selectionSort(arr,size);
  printArray(arr,size);


  return 0;
}