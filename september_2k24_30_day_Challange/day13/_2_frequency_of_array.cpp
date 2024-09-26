// preprocessor
#include <iostream>
#include <map>
using namespace std;

void printFrequencyOfArr(int arr[], int size)
{
  map<int, int> frequencyArr;
  for (int i = 0; i < size; i++)
  {
    if (frequencyArr.find(arr[i]) != frequencyArr.end())
    {
      frequencyArr[arr[i]]++;
    }
    else
    {
      frequencyArr[arr[i]] = 1;
    }
  }

  for (auto it = frequencyArr.begin(); it != frequencyArr.end(); it++)
  {
    cout << it->first << " -> " << it->second << endl;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the elements at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Frequency of the array :" << endl;
  printFrequencyOfArr(arr, size);

  return 0;
}