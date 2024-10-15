// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
void countingSort(int arr[], int size)
{
  // find the max element of the array
  int max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  // create the max +1 size countArr
  int countArr[max + 1] = {0};
  // calculate frequency
  for (int i = 0; i < size; i++)
  {
    countArr[arr[i]]++;
  }
  int j = 0;
  for (int i = 0; i <= max; i++)
  {
    while (countArr[i] > 0)
    {
      arr[j] = i;
      j++;
      countArr[i]--;
    }
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
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before counting sort :" << endl;
  printArr(arr, size);
  cout << endl;
  cout << "After counting sort :" << endl;
  countingSort(arr, size);
  printArr(arr, size);

  return 0;
}