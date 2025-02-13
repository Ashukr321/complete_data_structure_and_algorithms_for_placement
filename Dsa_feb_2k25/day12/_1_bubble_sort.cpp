#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertionSort(vector<int>& arr)
{
    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int partition(vector<int>& arr, int start, int end)
{
    int pivot = arr[end];
    int i = start;
    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[end]);
    return i;
}

void quickSort(vector<int>& arr, int start, int end)
{
    if (start < end)
    {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot - 1);
        quickSort(arr, pivot + 1, end);
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    // Bubble Sort
    vector<int> bubbleArr = arr; // Copy original array
    cout << "Before bubble sort: ";
    printArray(bubbleArr);
    bubbleSort(bubbleArr);
    cout << "After bubble sort: ";
    printArray(bubbleArr);
    cout << endl;

    // Insertion Sort
    vector<int> insertionArr = arr; // Copy original array
    cout << "Before insertion sort: ";
    printArray(insertionArr);
    insertionSort(insertionArr);
    cout << "After insertion sort: ";
    printArray(insertionArr);
    cout << endl;

    // Selection Sort
    vector<int> selectionArr = arr; // Copy original array
    cout << "Before selection sort: ";
    printArray(selectionArr);
    selectionSort(selectionArr);
    cout << "After selection sort: ";
    printArray(selectionArr);
    cout << endl;

    // Quick Sort
    vector<int> quickArr = arr; // Copy original array
    cout << "Before quick sort: ";
    printArray(quickArr);
    quickSort(quickArr, 0, quickArr.size());
}