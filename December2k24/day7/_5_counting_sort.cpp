// preprocessor
#include <iostream>
#include <vector>
using namespace std;

// printArray
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

//  counting SOrt
void countingSort(int arr[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  // create the vector with size of max+1 and initialize it with 0
  vector<int> freqArr(max + 1, 0);
  // calculate the freq
  for (int i = 0; i < size; i++)
  {
    freqArr[arr[i]]++;
  }
  int j = 0;
  for (int i = 0; i <= max; i++)
  {
    while (freqArr[i] > 0)
    {
      arr[j] = i;
      j++;
      freqArr[i]--;
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
  cout << "Enter the elements of the array :" << endl;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << endl;
    cin >> n;
    arr[i] = n;
  }
  cout << "Before counting sort :" << endl;
  printArray(arr, size);
  countingSort(arr, size);
  cout << "After counting sort" << endl;
  printArray(arr, size);

  return 0;
}
// time complexity : O(n+k)