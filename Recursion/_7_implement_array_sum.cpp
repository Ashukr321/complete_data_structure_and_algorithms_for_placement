// preprocessor
#include <iostream>
using namespace std;

// Recursive sumArray function
int sumArray(int arr[], int size) {
    if (size <= 0) {
        return 0;
    }
    return arr[size - 1] + sumArray(arr, size - 1);
}

// main starts here ...
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the element of the array: ";
        cin >> arr[i];
    }

    int result = sumArray(arr, size);
    cout << "Sum: " << result << endl;

    return 0;
}
