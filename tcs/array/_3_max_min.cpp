// preprocessor
#include <iostream>
using namespace std;

void printMaxMin(int arr[], int size)
{
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    else if (arr[i] < min)
    {
      {
        min = arr[i];
      }
    }
    
  }
  cout << "max element =>" << max << endl;
    cout << "min element =>" << min << endl;
}
// main start here ...
int main()
{
  int arr[] = {3,4,34,3,5,23,65,6,25};
  int size = sizeof(arr) / sizeof(arr[0]);
  printMaxMin(arr,size);
  return 0; 

}