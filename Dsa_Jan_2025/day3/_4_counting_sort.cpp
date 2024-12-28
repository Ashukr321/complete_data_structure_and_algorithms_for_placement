// preprocessor
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
void countingSort(int arr[], int size)
{
  // find the max element in the array
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    //  create the freq array
    int freq[max + 1] = {0};
    // calculate the frequency
    for (int i = 0; i < size; i++)
    {
      freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= max; i++)
    {
      while (freq[i] > 0)
      {
        arr[j] = i;
        freq[i]--;
        j++;
      }
    }
  }
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of array : ";
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before counting sort :" << endl;
  printArray(arr, size);
  // countingSOrt
  countingSort(arr, size);
  cout << "After counting sort :" << endl;
  printArray(arr, size);

  return 0;
}