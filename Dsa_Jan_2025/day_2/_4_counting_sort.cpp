#include <iostream>
#include <vector>
using namespace std;

void printArr(const vector<int>& arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

void countingSort(vector<int>& arr)
{
    if (arr.empty()) return;

    int max = arr[0];
    for (int num : arr)
    {
        if (num > max)
        {
            max = num;
        }
    }

    // Create the frequency array
    vector<int> freq(max + 1, 0);

    // Calculate the frequency of each element
    for (int num : arr)
    {
        freq[num]++;
    }

    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
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

    cout << "Before counting sort: ";
    printArr(arr);

    countingSort(arr);

    cout << "After counting sort: ";
    printArr(arr);

    return 0;
}