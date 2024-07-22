// preprocessor
#include <iostream>
#include <map>
using namespace std;

int majorityElement(int arr[], int size)
{
  // create the freqMap
  map<int, int> freqMap;

  for (int i = 0; i < size; i++)
  {
    freqMap[arr[i]]++;
  }

  int maxFreq = 0;
  int majorityElement = -1;
  // find the majority element
  for (auto it : freqMap)
  {
    if (it.second > maxFreq)
    {
      maxFreq = it.second;
      majorityElement = it.first;
    }
  }

  cout << "frequency of array : " << endl;
  for (auto it : freqMap)
  {
    cout << it.first << " ->>>" << it.second << endl;
  }

  cout << endl;

  return majorityElement;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << endl;
  cout << "majority element in the array " << majorityElement(arr, size) << endl;

  return 0;
}