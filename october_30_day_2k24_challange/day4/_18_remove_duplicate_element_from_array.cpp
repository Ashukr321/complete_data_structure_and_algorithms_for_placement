// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void removeDuplicateArray(int arr[], int &size) {
  bubbleSort(arr, size);
  int j = 0;
  for (int i = 0; i < size; i++) {
    if (i > 0 && arr[i] == arr[i - 1]) {
      continue;
    }
    arr[j++] = arr[i];
  }
  size = j;
}

int main() {
  int size;
  cout << "Enter the number of elements: " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before removing duplicate elements from the array: " << endl;
  printArr(arr, size);

  removeDuplicateArray(arr, size);

  cout << "After removing duplicate elements from the array: " << endl;
  printArr(arr, size);

  return 0;
}