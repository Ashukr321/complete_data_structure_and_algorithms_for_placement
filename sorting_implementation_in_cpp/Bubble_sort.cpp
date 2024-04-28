#include <iostream>
using namespace std;

// Implement swap function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        int n;
        cout << "Enter the element at index " << i << ": ";
        cin >> n;
        arr[i] = n;
    }

    // Sorting the array
    cout << "Before sorting the array: " << endl;
    printArray(arr, size);
    cout << endl;

    bubbleSort(arr, size);

    cout << "After sorting: " << endl;
    printArray(arr, size);

    return 0;
}


/*
 bubble sort 
  worst case time complexity -> o(n);
*/