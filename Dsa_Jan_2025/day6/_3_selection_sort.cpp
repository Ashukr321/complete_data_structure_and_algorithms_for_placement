// preprocessor
#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) // Loop until the second last element
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
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
        cout << "Enter the element: ";
        cin >> arr[i];
    }

    cout << "Before selection sort: " << endl;
    printArray(arr, size);
    selectionSort(arr, size);
    cout << "After selection sort: " << endl;
    printArray(arr, size);
    return 0;
}