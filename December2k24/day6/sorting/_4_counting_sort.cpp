#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int size)
{
    // Find the max element of the array
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create the frequency array and initialize it to 0
    int* freqArr = new int[max + 1](); // Dynamically allocate and initialize to 0

    // Fill the frequency array
    for (int i = 0; i < size; i++)
    {
        freqArr[arr[i]]++;
    }

    // Sort the array using the frequency array
    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freqArr[i] > 0)
        {
            arr[j] = i; // Assign the index to arr
            j++;
            freqArr[i]--;
        }
    }

    // Free the dynamically allocated memory
    delete[] freqArr;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare the array
    int* arr = new int[size]; // Dynamically allocate the array

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before counting sort:" << endl;
    printArr(arr, size);

    countingSort(arr, size);

    cout << "After counting sort:" << endl;
    printArr(arr, size);

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}