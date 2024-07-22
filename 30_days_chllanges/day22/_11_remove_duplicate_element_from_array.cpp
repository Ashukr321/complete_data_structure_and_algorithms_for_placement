// preprocessor
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


vector<int> removeDuplicate(int arr[], int size)
{
  vector<int> result;
  int i = 0;
  //sort the array 
  sort(arr,arr+size);
  for (int i = 0; i < size; i++)
  {
    if (i < size - 1 && arr[i] == arr[i + 1])
    {
      continue;
    }
    else
    {
      result.push_back(arr[i]);
    }
  }
  return result;
}
// main start here ...
int main()
{

  int size;
  cout << "Enter  the size of the array " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index" << i << endl;
    cin >> n;
    arr[i] = n;
  }
  vector<int> result =  removeDuplicate(arr,size);
  // iterator
  for(auto it:result){
    cout<<it<<" ";
  }

  return 0;
}