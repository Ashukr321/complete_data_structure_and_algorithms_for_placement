#include <iostream>
#include <vector>

using namespace std;

void displayArray(const vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<int>& arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    cout << "Before insertion sorting: " << endl;
    displayArray(arr);

    insertionSort(arr);

    cout << "After sorting the array: " << endl;
    displayArray(arr);

    return 0;
}
