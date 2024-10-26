#include <iostream>
#include <algorithm>
using namespace std;

void displayArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) // The last element will already be in place
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) // Start from the next element
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // Swap the found minimum element with the first element
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;
    
    // Use dynamic memory allocation
    int *arr = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ":" << endl;
        cin >> arr[i];
    }
    
    cout << "Before selection sort :" << endl;
    displayArr(arr, size);
    
    selectionSort(arr, size);
    
    cout << "After selection sort :" << endl;
    displayArr(arr, size);
    
    // Free the allocated memory
    delete[] arr;

    return 0;
}