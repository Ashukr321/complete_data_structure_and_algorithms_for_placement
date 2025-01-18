#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Create the simple vector and iterator
    vector<int> v;   // Create the empty vector
    v.push_back(1);  // 0 index
    v.push_back(20); // 1 index
    v.push_back(40); // 2 index
    v.push_back(30); // 3 index
    v.push_back(30); // 4 index
    v.push_back(30); // 5 index
    v.push_back(30); // 6 index
    v.push_back(30); // 7 index

    // Get the vector element at index
    cout << "Element at index 2: " << v[2] << endl; // Output is 40

    // Sort the vector
    sort(v.begin(), v.end());

    // Print sorted vector
    cout << "Sorted vector:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Get the size of the vector
    cout << "Size of the vector is " << v.size() << endl;

    // Remove duplicate elements
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end()); // Erase the duplicates beyond the unique range

    // Print the unique vector
    cout << "Vector after removing duplicates:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
