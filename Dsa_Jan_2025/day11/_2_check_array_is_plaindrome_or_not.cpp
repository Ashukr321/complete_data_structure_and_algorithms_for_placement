// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size)
{
  if (size <= 0)
  {
    return false;
  }
  for (int i = 0; i < size / 2; i++)
  {
    if (arr[i] != arr[size - 1 - i])
    {
      return false;
    }
  }
  return true;
}

// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  // create the array
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  if (isPalindrome(arr, size))
  {
    cout << "array is palindrome" << endl;
  }
  else
  {
    cout << "array is not palindrome" << endl;
  }
  return 0;
}