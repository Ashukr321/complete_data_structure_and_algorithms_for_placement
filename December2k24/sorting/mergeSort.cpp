// preprocessor
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


void conquer(int arr[], int start, int mid, int end)
{
    // array size
    int arr_size = end - start + 1;
    int *mergedArr = new int[arr_size]; // Dynamically allocate memory for merged array
    int idx1 = start;
    int idx2 = mid + 1;
    int x = 0;

    while (idx1 <= mid && idx2 <= end)
    {
        if (arr[idx1] <= arr[idx2])
        {
            mergedArr[x] = arr[idx1];
            x++;
            idx1++;
        }
        else
        {
            mergedArr[x] = arr[idx2]; // Corrected from mergedArr[idx2] to arr[idx2]
            x++;
            idx2++;
        }
    }
    
    while (idx1 <= mid)
    {
        mergedArr[x] = arr[idx1];
        x++;
        idx1++;
    }
    
    while (idx2 <= end)
    {
        mergedArr[x] = arr[idx2];
        x++;
        idx2++;
    }
    
    // Copy mergedArr back to arr
    for (int i = 0, j = start; i < arr_size; i++, j++)
    {
        arr[j] = mergedArr[i];
    }

    delete[] mergedArr; // Free the dynamically allocated memory
}



void MergeSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    conquer(arr, start, mid, end);
}


// main starts here ...
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    
    // Dynamically allocate memory for the array
    int* arr = new int[size]; 

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Before merge sort:" << endl;
    printArr(arr, size);
    cout << endl;

    MergeSort(arr, 0, size - 1);
    
    cout << "After merge sort:" << endl;
    printArr(arr, size);

    delete[] arr; // Free the dynamically allocated memory
    return 0;
}
