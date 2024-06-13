#include <iostream>
#include <array>
using namespace std;

template<size_t SIZE>
void printArray(const array<int, SIZE>& arr) {
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}

// main starts here...
int main() {
    const int size = 5; // Example size; must be known at compile time
    array<int, size> myArr;

    for (int i = 0; i < size; i++) {
        int n;
        cout << "Enter the element at index: " << i << endl;
        cin >> n;
        myArr[i] = n;
    }

    printArray(myArr);

    // Using array STL methods
    cout << "Size of the array: " << myArr.size() << endl;
    cout << "First element: " << myArr.front() << endl;
    cout << "Last element: " << myArr.back() << endl;
    
    // Correct way to access the last element using iterator
    int ptr = *(myArr.end() - 1);  // Get the last element
    cout << "Last element using iterator: " << ptr << endl;

    // Using at() to access element at index 1
    cout << "Element present at index 1: " << myArr.at(1) << endl;

    return 0;
}
