// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
bool isSorted(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    {
      if (arr[i] > arr[i + 1])
      {
        return false;
      }
    }

    return true;
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
    printArr(arr, size);
     if(isSorted(arr,size)){
      cout<<"Array is sorted"<<endl;
     }else {
      cout<<"Array is not sorted"<<endl;
     }
    return 0;
  }