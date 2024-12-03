#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void ReverseArr(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare a dynamic array
    int* arr = new int[size];

    // Initialize the array
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArr(arr, size);

    ReverseArr(arr, size);
    cout << "After reversing the array: ";
    printArr(arr, size);

    // Free the allocated memory
    delete[] arr;

    return 0;
}