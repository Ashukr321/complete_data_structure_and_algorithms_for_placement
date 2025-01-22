// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
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
  int count[max + 1] = {0};
  for (int i = 0; i < size; i++)
  {
    count[arr[i]]++;
  }

  int j = 0;
  for (int i = 0; i <= max; i++)
  {
    while (count[i] != 0)
    {
      arr[j] = i;
      count[i]--;
      j++;
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the  array : ";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Before counting sort " << endl;
  printArray(arr, size);
  cout << "After counting sort " << endl;
  countingSort(arr, size);
  printArray(arr, size);

  return 0;
}