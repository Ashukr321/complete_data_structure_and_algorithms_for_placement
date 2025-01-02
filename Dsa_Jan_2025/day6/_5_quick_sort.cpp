// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

// print Array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // Choosing the last element as pivot
    int i = start - 1; // Pointer for the smaller element
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot) // If current element is smaller than or equal to pivot
        {
            i++; // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap
        }
    }
    swap(arr[i + 1], arr[end]); // Swap the pivot element with the element at i + 1
    return i + 1; // Return the partitioning index
}

void quickSort(int arr[], int start, int end)
{
    if (start < end) // Base condition for recursion
    {
        int pivot = partition(arr, start, end); // Partitioning index
        quickSort(arr, start, pivot - 1); // Recursively sort elements before partition
        quickSort(arr, pivot + 1, end); // Recursively sort elements after partition
    }
}

// main start here ...
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // create the array
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before quick sort: " << endl;
    printArray(arr, size);
    quickSort(arr, 0, size - 1);
    cout << "After quick sort: " << endl;
    printArray(arr, size);

    return 0;
}