#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Added space for better readability
    }
    cout << endl;
}

void countingSort(int arr[], int size)
{
    // Find the maximum value in the array
    int max = arr[0];
    for (int i = 1; i < size; i++) // Start from 1 since max is initialized with arr[0]
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create the frequency array
    int freq[max + 1] = {0}; // Initialize frequency array with zeros
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++; // Count occurrences of each element
    }

    // Reconstruct the sorted array
    int j = 0;
    for (int i = 0; i <= max; i++) // Iterate through the frequency array
    {
        while (freq[i] > 0) // While there are occurrences of the element
        {
            arr[j++] = i; // Place the element in the sorted array
            freq[i]--; // Decrease the count
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before counting sort: ";
    printArray(arr, size);

    countingSort(arr, size);

    cout << "After counting sort: ";
    printArray(arr, size);

    return 0;
}