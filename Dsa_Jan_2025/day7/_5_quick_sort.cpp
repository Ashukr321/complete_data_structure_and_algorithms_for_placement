// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

// printArray
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
    int pivot = arr[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end) // Use recursion instead of while loop
    {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

// main start here ...
int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    // create the array dynamically
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ":" << endl;
        cin >> arr[i];
    }

    cout << "Before quick sort :" << endl;
    printArray(arr, size);
    
    // quick sort
    quickSort(arr, 0, size - 1);
    
    cout << "After quick sort :" << endl;
    printArray(arr, size);

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}