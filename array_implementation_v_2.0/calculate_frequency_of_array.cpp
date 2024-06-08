// preprocessor
#include <iostream>
#include <map>
using namespace std;

// main start here ...
int main()
{
  cout << "frequency calculation " << endl;
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    arr[i] = n;
  }
  map<int, int> freeMap;
  for (int i = 0; i < size; i++)
  {
    freeMap[arr[i]]++;
  }

  for (auto it : freeMap)
  {
    cout << it.first << "->" << it.second << endl;
  }

  return 0;
}

// what is the use of the map