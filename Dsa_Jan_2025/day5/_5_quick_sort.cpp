#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quickSort(int arr[], int start, int end) {
    if (start < end) { 
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be a positive integer." << endl;
        return 1; // Exit if the size is not valid
    }

    int* arr = new int[size]; // Dynamic memory allocation
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before quick sort: " << endl;
    printArr(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "After quick sort: " << endl;
    printArr(arr, size);

    delete[] arr; // Free allocated memory
    return 0;
}