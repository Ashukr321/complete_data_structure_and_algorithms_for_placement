#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


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
        int j = i - 1; // Start from i - 1
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void printArr(const vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

// 4. counting sort 
void countingSort(vector<int>& arr);



int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of element " << (i + 1) << ": ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArr(arr);

    // Bubble Sort
    vector<int> bubbleArr = arr; // Copy original array
    cout << "1. Bubble Sort:" << endl;
    bubbleSort(bubbleArr);
    printArr(bubbleArr);

    // Insertion Sort
    vector<int> insertionArr = arr; // Copy original array
    cout << "2. Insertion Sort:" << endl;
    insertionSort(insertionArr);
    printArr(insertionArr);

    // Selection Sort
    vector<int> selectionArr = arr; // Copy original array
    cout << "3. Selection Sort:" << endl;
    selectionSort(selectionArr);
    printArr(selectionArr);

    return 0;
}