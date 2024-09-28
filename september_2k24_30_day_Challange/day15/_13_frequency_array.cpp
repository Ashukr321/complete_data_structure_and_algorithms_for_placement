// preprocessor
#include <iostream>
#include <map>
using namespace std;

void frequencyOfArr(int arr[], int size)
{
  map<int, int> freqArr;
  for (int i = 0; i < size; i++)
  {
    if (freqArr.find(arr[i]) != freqArr.end())
    {
      freqArr[arr[i]]++;
    }
    else
    {
      freqArr[arr[i]] = 1;
    }
  }
  for (auto it = freqArr.begin(); it != freqArr.end(); it++)
  {
    cout << it->first << " -> " << it->second << endl;
  }
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element " << i + 1 << " of the array: ";
    cin >> n;
    arr[i] = n;
  }
  frequencyOfArr(arr, size);

  return 0;
}