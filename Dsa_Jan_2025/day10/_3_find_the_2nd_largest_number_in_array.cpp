// preprocessor
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printArray(const vector<int>& v) // Pass by reference to avoid copying
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// main start here ...
int main()
{
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    // Initialize the vector with the specified size
    vector<int> v(size);
    
    // Populate the vector using indexing
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of the vector: ";
        cin >> v[i]; // Assign directly to the vector
    }

    printArray(v);
    
    // Sort the vector
    sort(v.begin(), v.end());
    
    // Check if there are at least two elements
    if (size >= 2) {
        cout << "The 2nd largest number is " << v[size - 2] << endl;
    } else {
        cout << "Not enough elements to find the 2nd largest number." << endl;
    }
    
    return 0;
}