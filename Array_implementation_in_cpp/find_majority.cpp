#include <iostream>
#include <map>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input validation
    if (size <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        return 1; // Exit with error
    }

    // Dynamically allocate memory for the array
    int* arr = new int[size];

    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": ";
        cin >> arr[i];
    }

    // Map to store frequencies of elements
    map<int, int> freqMap;
    for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    cout << "Frequency of elements:" << endl;
    for (const auto& it : freqMap) {
        cout << it.first << "->" << it.second << endl;
    }

    cout << "Finding the majority element in the array:" << endl;

    // Finding majority element
    int majorityElement = -1;
    int maxFrequency = 0;
    for (const auto& it : freqMap) {
        if (it.second > size / 2) {
            majorityElement = it.first;
            maxFrequency = it.second;
            break;
        }
    }

    // Output result
    if (majorityElement != -1) {
        cout << "Majority Element is: " << majorityElement << " (appears " << maxFrequency << " times)" << endl;
    } else {
        cout << "No Majority Element present." << endl;
    }

    // Deallocate memory
    delete[] arr;
  
    return 0;
}
