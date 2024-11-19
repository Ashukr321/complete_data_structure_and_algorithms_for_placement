#include <iostream>
#include <algorithm>
using namespace std;

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " -> "; // Print arrow only between elements
        }
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

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void countingSort(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    int countArr[max + 1] = {0}; // Create count array
    for (int i = 0; i < size; i++) {
        countArr[arr[i]]++; // Count frequency of each element
    }

    int j = 0;
    for (int i = 0; i <= max; i++) { // Iterate through countArr
        while (countArr[i] > 0) {
            arr[j] = i; // Fill the original array
            j++;
            countArr[i]--;
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1; // Pointer for the smaller element
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap if element is smaller than or equal to pivot
        }
    }
    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at i + 1
    return i + 1; // Return the partitioning index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high); // Partitioning index
        quickSort(arr, low, pivot - 1); // Recursively sort elements before partition
        quickSort(arr, pivot + 1, high); // Recursively sort elements after partition
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate array
    for (int i = 0; i < size; i++) {
        cout << " Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Display Array: " << endl;
    printArr(arr, size);

    cout << endl;
    cout << "Bubble Sort: " << endl;
    bubbleSort(arr, size);
    printArr(arr, size);
    cout << endl;

    // Resetting the array for the next sort
    cout << "Enter the elements again for sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Insertion Sort: " << endl;
    insertionSort(arr, size);
    printArr(arr, size);
    cout << endl;

    // Resetting the array for the next sort
    cout << "Enter the elements again for sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Counting Sort: " << endl;
    countingSort(arr, size);
    printArr(arr, size);
    cout << endl;

    // Resetting the array for the next sort
    cout << "Enter the elements again for sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Selection Sort: " << endl;
    selectionSort(arr, size);
    printArr(arr, size);
    cout << endl;

    // Resetting the array for the next sort
    cout << "Enter the elements again for sorting: " << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Quick Sort: " << endl;
    quickSort(arr, 0, size - 1);
    printArr(arr, size);
    cout << endl;

    delete[] arr; // Free dynamically allocated memory
    return 0;
}