#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void printArr(const vector<int>& arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

void countingSort(vector<int>& arr)
{
    // Find max
    int max = INT_MIN;
    for (int num : arr)
    {
        if (num > max)
        {
            max = num;
        }
    }

    vector<int> freqArr(max + 1, 0); 
    for (int num : arr)
    {
        freqArr[num]++;
    }

    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freqArr[i] > 0)
        {
            arr[j] = i;
            j++;
            freqArr[i]--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size must be a positive integer." << endl;
        return 1;
    }

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArr(arr);

    countingSort(arr);
    cout << "After counting sort: ";
    printArr(arr);

    return 0;
}