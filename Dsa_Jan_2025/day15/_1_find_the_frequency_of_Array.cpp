// preprocessor
#include <iostream>
#include <map>
using namespace std;

void freqArray(int arr[], int size)
{
  map<int, int> freqMap;
  for (int i = 0; i < size; i++)
  {
    freqMap[arr[i]]++;
  }
  for (auto it = freqMap.begin(); it != freqMap.end(); it++)
  {
    cout << it->first << " ->" << it->second << endl;
  }
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
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  freqArray(arr, size);

  return 0;
}