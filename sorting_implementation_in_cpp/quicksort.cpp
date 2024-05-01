#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array and return the pivot index
int partition(vector<int>& arr, int low, int high) {
  int pivot = arr[high];
  int i = low - 1; // index of the smallest element

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

// Function to perform Quick Sort algorithm
void QuickSort(vector<int>& arr, int low, int high) {
  if (low < high) {
    // get partitioning index from the partition function
    int pi = partition(arr, low, high);

    // recursively call the function
    QuickSort(arr, low, pi - 1);
    QuickSort(arr, pi + 1, high);
  }
}

// Function to print the array
void printArray(vector<int>& arr) {
  for (auto it : arr) {
    cout << it << " ";
  }
  cout << endl;
}

// Main function
int main() {
  vector<int> arr = {10, 7, 4, 5, 6};
  int n = arr.size();
  
  cout << "Before sorting: " << endl;
  printArray(arr);

  // Sort the array
  QuickSort(arr, 0, n - 1);

  cout << "After sorting: " << endl;
  printArray(arr);

  return 0;
}
