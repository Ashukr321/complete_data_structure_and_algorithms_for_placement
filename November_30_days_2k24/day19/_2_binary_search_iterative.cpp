#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int size, int target) // Change void to int
{
    int start = 0;
    int end = size - 1;
    while (start <= end) // Change < to <=
    {
        int mid = start + (end - start) / 2; // Correct mid calculation
        if (arr[mid] == target)
        {
            return mid; // Return the index of the found element
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1; // Return -1 if not found
}

// main start here ...
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    // Declare a static array with a maximum size
    const int MAX_SIZE = 100; // Adjust this as necessary
    if (size > MAX_SIZE) {
        cout << "Size exceeds maximum allowed size." << endl;
        return 1; // Exit if the size is too large
    }
    
    int arr[MAX_SIZE]; // Use a fixed-size array

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }
    
    cout << "Print the array: " << endl;
    printArr(arr, size);
    
    cout << "Enter the element to search: ";
    int target;
    cin >> target;
    
    int targetIndex = binarySearch(arr, size, target);
    if (targetIndex != -1)
    {
        cout << "Element found at index " << targetIndex << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}