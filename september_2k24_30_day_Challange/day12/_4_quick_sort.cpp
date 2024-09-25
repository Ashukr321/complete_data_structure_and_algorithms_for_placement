// preprocessor
#include<iostream>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl; // added to move to a new line after printing the array
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int i = low - 1;
  
  for (int j = low; j < high; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]s);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quickSort(int arr[], int low, int high) {
  if (low < high) {
    int pivot = partition(arr, low, high);
    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
  }
}

// main starts here ...
int main() {
  int size;
  cout << "Enter the size of the array: " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    int n;
    cout << "Enter your element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before sorting:" << endl;
  printArr(arr, size);

  quickSort(arr, 0, size - 1); // added to call the quickSort function

  cout << "After sorting:" << endl;
  printArr(arr, size);

  return 0;
}