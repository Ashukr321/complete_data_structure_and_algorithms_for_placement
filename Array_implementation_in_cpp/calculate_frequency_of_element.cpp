// preprocessor
#include <iostream>
#include <map>
using namespace std;

// main start here ...
int main()
{
  cout << "frequency calculation in the cpp" << endl;
  int size;
  cout << "Enter the size of the array : " << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }

  // create the map that store the map<int, int> myMap
  map<int, int> freqMap;

  // example : 1,2,3,3,4,4
  for (int i = 0; i < size; i++)
  {
    freqMap[arr[i]]++;
  }

  cout << endl;

  for (auto it : freqMap)
  {
    cout << it.first << " -> " << it.second << endl;
  }

  return 0;
}
/*

  map store the data in the keys values pairs
  map<key , value> myMap;
  by default map store the data in the sorted order

  all the keys of the map is the unique so we can use the map for the calculation of the frequency of the array or vector
  // algo
  1. take size of the array
  2. take all the element of the array
  3.create the map  that store the int and int  data inside it
  4. print the map using iterator
*/
