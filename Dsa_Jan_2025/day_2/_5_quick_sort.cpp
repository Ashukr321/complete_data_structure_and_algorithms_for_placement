#include <iostream>
#include <algorithm> // For std::swap
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int l = s - 1;
    for (int j = s; j < e; j++) // Start from s
    {
        if (arr[j] <= pivot)
        {
            l++;
            swap(arr[l], arr[j]);
        }
    }
    swap(arr[l + 1], arr[e]);
    return l + 1;
}

void quickSort(int arr[], int s, int e)
{
    if (s < e) // Change to s < e
    {
        int pivot = partition(arr, s, e);
        quickSort(arr, s, pivot - 1);
        quickSort(arr, pivot + 1, e);
    }
}

// main start here ...
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    // Use dynamic memory allocation
    int* arr = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before Sorting: ";
    printArray(arr, size);
    
    quickSort(arr, 0, size - 1);
    
    cout << "After Sorting: ";
    printArray(arr, size);
    
    // Free the allocated memory
    delete[] arr;

    return 0;
}