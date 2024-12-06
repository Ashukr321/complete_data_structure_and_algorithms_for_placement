#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

int binarySearch(int arr[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, mid + 1, high, target);
        }
        else
        {
            return binarySearch(arr, low, mid - 1, target);
        }
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    vector<int> arr(size); // Use vector for dynamic array

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    // Sort the array before performing binary search
    sort(arr.begin(), arr.end());

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int result = binarySearch(arr.data(), 0, size - 1, target); // Use arr.data() to get pointer to the array

    if (result != -1) // Check if result is -1
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}