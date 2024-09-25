// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  while (i < j)
  {
    if (arr[i] != arr[j])
    {
      return false;
      break;
    }
    i++;
    j--;
  }
  return true;
}
// main start here ...
int main()
{
  int size;
  cout << "Enter size  of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter  element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  if (isPalindrome(arr, size))
  {
    cout << "Array is a palindrome" << endl;
  }
  else
  {
    cout << "Array is not a palindrome" << endl;
  }

  return 0;
}