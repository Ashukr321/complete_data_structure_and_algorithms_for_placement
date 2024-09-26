// preprocessor
#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] != arr[size - i - 1])
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
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the elements at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  if (isPalindrome(arr, size))
  {
    cout << "The array is a palindrome array" << endl;
  }
  else
  {
    cout << "The array is not a palindrome array" << endl;
  }

  return 0;
}