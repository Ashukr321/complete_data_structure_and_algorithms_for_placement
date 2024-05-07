#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printArray(vector<int> arr)
{
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

void dutchNational(vector<int>& arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 1, 1, 1, 0, 0, 0, 2, 2};
    cout << "Before sorting : " << endl;
    printArray(arr);
    dutchNational(arr);
    cout << "After applying Dutch National algorithm : " << endl;
    printArray(arr);
    return 0;
}

/*
dutch national algorithm -> also know as dutch national flag problem
application of the dutch national flag algorithm
time complexity is : o(n) -> linear time complexity
use in networking ,portioning algorithm

algo:
  use 3 pointer variable
    1. low = 0 ;
    2. mid = 0;
    3. high = n-1;

    if(arr[mid] ==0){
      swap(arr[mid] ,arr[low]);
      low++;
      mid++;
    }
    if(arr[mid] == 1){
      mid++;
    }
     else  {
      swap (arr[mid] ,arr[high]);
      high--;
     }

*/