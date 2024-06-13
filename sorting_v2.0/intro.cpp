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
// main start here ...
int main()
{

  cout << "sorting algorithms in the cpp " << endl;
  int size;
  cout << "Enter the size of the element :" << endl;
  cin >> size;

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  printArray(arr, size);
  return 0;
}

/*

types of the sorting algorithms

  qbhism
 bubble sort
 selection sort
 insertion sort
 quick sort
 merge sort

 rcb
 radix sort
 counting sort
 bucket sort

  it
  intro sort
  tim sort
*/