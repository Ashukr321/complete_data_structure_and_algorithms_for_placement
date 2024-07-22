// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size)
{
  int i = 0;
  int j = size - 1;
  while (i <= j)
  {
    if (arr[i] != arr[j])
    {
      return false;
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
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << endl;
    cin >> n;
    arr[i] = n;
  }

  if (isPalindrome(arr, size))
  {
    cout << "The array is a palindrome" << endl;
  }
  else
  {
    cout << "The array is not a palindrome" << endl;
  }

  return 0;
}