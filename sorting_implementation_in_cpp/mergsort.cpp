#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// merge sort not in sorted order 
vector<int> mergeSort(vector<int> arr1, vector<int> arr2) {
    vector<int> mergeArray;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            mergeArray.push_back(arr1[i]);
            i++;
        } else {
            mergeArray.push_back(arr2[j]);
            j++;
        }
    }
    // insert the rest of the elements into the mergeArray 
    // arr1 
    while (i < arr1.size()) {
        mergeArray.push_back(arr1[i]);
        i++;
    }
    // arr2 
    while (j < arr2.size()) {
        mergeArray.push_back(arr2[j]);
        j++;
    }
    return mergeArray;
}

//main starts here ...
int main() {
    // create two vectors arr1 and arr2 
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> arr2 = {2, 32, 43, 4, 1324,1};

    vector<int> mergeA = mergeSort(arr1, arr2);
    cout << "After merging the Array : " << endl;

    for (auto it : mergeA) {
        cout << it << " ";
    }

    return 0;
}
