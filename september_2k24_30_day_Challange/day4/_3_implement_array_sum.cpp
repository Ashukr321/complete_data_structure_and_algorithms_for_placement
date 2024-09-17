// preprocessor
#include <iostream>
using namespace std;

// input = > 1 2 3 4 5
int sumOfArr(int arr[], int n)
{
  if (n == 1)
  {
    return arr[0];
  }
  return arr[n - 1] + sumOfArr(arr, n - 1);
}

void printArr(int arr[],int size){
  for (int i = 0; i < size;i++ )
  {
    cout<<arr[i]<<" ";
  }
  
}
// main start here ...
int main()
{
  int n;
  cout << "Enter the size of the array :" << endl;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    int n;
    cout << "Enter the element at indexP " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  printArr(arr,n);
  cout<<endl;


  cout << " the sum of the number : " << sumOfArr(arr, n) << endl;
  
  return 0;
}