// preprocessor
#include <iostream>
using namespace std;

void displayArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void reverseArray(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  for (; start < size / 2; start++)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
  end--;
  }
}
// main start here ...
int main()
{
  int size;
  cout << "enter the size of the array  " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "before reversing the array : " << endl;
  cout<<endl;
  displayArray(arr, size);
  cout<<"After reversing the array : "<<endl;
  reverseArray(arr,size);
  displayArray(arr,size);
  return 0;
}