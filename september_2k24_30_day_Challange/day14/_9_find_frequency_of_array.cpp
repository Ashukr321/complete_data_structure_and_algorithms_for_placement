// preprocessor
#include <iostream>
#include <map>
using namespace std;

void printFrequencyOfArray(int arr[], int size)
{
  map<int, int> frequencyMap;
  for (int i = 0; i < size; i++)
  {
    if (frequencyMap.find(arr[i]) != frequencyMap.end())
    {
      frequencyMap[arr[i]]++;
    }
    else
    {
      frequencyMap[arr[i]] = 1;
    }
  }

  cout << "Frequency of the array :" << endl;
  for (auto it = frequencyMap.begin(); it != frequencyMap.end(); it++)
  {

    cout << it->first << "  ->" << it->second << endl;
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
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  printFrequencyOfArray(arr, size);

  return 0;
}