// preprocessor
#include <iostream>
using namespace std;

int maxOfArray(int arr[], int n)
{
  if (n == 1)
  {
    return arr[0];
  }
  return max(arr[n - 1], maxOfArray(arr, n - 1));
}
// main start here ...
int main()
{
  int size;
  cout << "Enter your size :" << endl;
  cin >> size;
  int arr[size];
  // 3 5 2 7 1  sample input
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter your element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout << "Maximum Element of the array :" << maxOfArray(arr, size) << endl;

  return 0;
}

// how this will work
/*
//sample input ->  3 5 2 7 1  , n= 5

step 1  :  n = 5
  ⭐⭐arr[5-1] = arr[4] = 1;
  check n==1 no then
  max(arr[4], maxOfArray(arr,n-1)) // call itself maxOfArray(arr,5-1)
    maxOfArray(arr,n-1) -> 7
    max -> 1 , 7 -> 7




step 2 : n = 4
  check n==1 no then
  max(arr[3], maxOfArray(arr,4)) //maxOfArray(arr,3)
    maxOfArray(arr,4) -> 5
    max , 7, 5-> 7



step 3 :  n = 3
  check n == 1
  max(arr[2], maxOfArray(arr,2)) //  maxOfArray(arr,2)

  maxOfArray(arr,2)-> return 5
  max , 2, 5  - > 5




 step 4 :  n = 2
 if(n==1) no then
 max(arr[1], maxOfArray(arr,1));//maxOfArray(arr,1);

  return  maxOfArray(arr,1) -> 3
  max , 5,3 => 5




 step 5 : n = 1;
 now
 n ==1 => return arr[0] -> 3
*/