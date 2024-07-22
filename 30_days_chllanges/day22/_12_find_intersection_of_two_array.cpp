#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int size1;
  cout << "Enter the size of the array 1" << endl;
  cin >> size1;
  int arr1[size1];

  for (int i = 0; i < size1; i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr1[i];
  }

  cout << endl;

  int size2;
  cout << "Enter the size of the array 2" << endl;
  cin >> size2;
  int arr2[size2];

  for (int i = 0; i < size2; i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr2[i];
  }

  cout << endl;

  vector<int> intersection;

  // insert the intersection element using loop
  for (int i = 0; i < size1; i++)
  {
    for (int j = 0; j < size2; j++)
    {
      if (arr1[i] == arr2[j])
      {
        intersection.push_back(arr1[i]);
        break; // to avoid duplicates
      }
    }
  }

  // print the intersection
  cout << "Intersection: ";
  sort(intersection.begin(), intersection.end());
  for (auto it : intersection)
  {
    cout << it << " ";
  }
  cout << endl;

  return 0;
}

// time complexity of the this programme is the o(n^2);
