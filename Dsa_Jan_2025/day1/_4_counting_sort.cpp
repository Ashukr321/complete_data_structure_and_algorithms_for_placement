// preprocessor
#include <iostream>
using namespace std;

// printArr

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void countingSort(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  // create the frequency array
  int freq[max + 1] = {0};
  // calculate the frequency
  for (int i = 0; i < size; i++)
  {
    freq[arr[i]]++;
  }
  int i = 0;
  for (int j = 0; j < max + 1; j++)
  {
    while (freq[j] > 0)
    {
      arr[i] = j;
      freq[j]--;
      i++;
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before counting sort " << endl;
  printArr(arr, size);
  countingSort(arr, size);
  cout << "After counting sort " << endl;
  printArr(arr, size);
  return 0;
}