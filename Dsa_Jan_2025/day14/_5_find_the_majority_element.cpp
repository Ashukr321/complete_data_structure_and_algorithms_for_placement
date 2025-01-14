// preprocessor
#include <iostream>
#include <map>
using namespace std;

void find_majority(int arr[], int size)
{
  map<int, int> m;
  // calculate the frequency of the element
  for (int i = 0; i < size; i++)
  {
    m[arr[i]]++;
  }
  int max = INT_MIN;
  // find the majority element
  for (auto it = m.begin(); it != m.end(); it++)
  {
    if (it->second > max)
    {
      max = it->first;
    }
  }
  cout << "majority element is => " << max << endl;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the  size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element :" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  find_majority(arr, size);
  return 0;
}