// preprocessor
#include <iostream>
#include <vector>
using namespace std;

void printArr(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void frequencyOfArray(const vector<int> &arr)
{
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    vector<int> freqArr(max + 1, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        freqArr[arr[i]]++;
    }
    
    printArr(freqArr);
}

// main starts here ...
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if (size <= 0)
    {
        cout << "Size must be a positive number." << endl;
        return 1;
    }

    vector<int> arr(size); 
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    frequencyOfArray(arr);
    return 0; 
}