// preprocessor
#include <iostream>
#include <map>
using namespace std;

void frequencyOfArray(int arr[], int size)
{
  map<int, int> frequencyOfArr;
  for (int i = 0; i < size; i++)
  {
    if (frequencyOfArr.find(arr[i]) != frequencyOfArr.end())
    {
      frequencyOfArr[arr[i]]++;
    }
    else
    {
      frequencyOfArr[arr[i]] = 1;
    }
  }

  // print the frequency of the array :
  for (auto it = frequencyOfArr.begin(); it != frequencyOfArr.end(); it++)
  {
    cout << it->first << "->" << it->second << endl;
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

  frequencyOfArray(arr, size);

  return 0;
}