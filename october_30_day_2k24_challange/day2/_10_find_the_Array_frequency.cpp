// preprocessor
#include <iostream>
#include <map>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] <<  " " ;
  }
}
void frequencyOfArray(int arr[], int size)
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

  cout << "Frequency of Array :" << endl;
  for (auto it = frequencyArr.begin(); it != frequencyArr.end(); it++)
  {
    cout << it->first << "  -> " << it->second << endl;
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

  // array element
  printArr(arr, size);
  cout << endl;
  frequencyOfArray(arr, size);
  return 0;
}