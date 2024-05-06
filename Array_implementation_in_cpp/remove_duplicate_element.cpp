// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicate(int arr[], int size)
{
  vector<int> result;
  for (int i = 0; i < size; i++)
  {
    if (i < size - 1 && arr[i] == arr[i + 1])
    {
      continue;
    }
    else
    {
      result.push_back(arr[i]);
    }
  }
  return result;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index : " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before removing duplicate " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  cout << "After removing duplicate element: " << endl;
  vector<int> v2 = removeDuplicate(arr, size);
  for (int it : v2)
  {
    cout << it << endl;
  }

  return 0;
}