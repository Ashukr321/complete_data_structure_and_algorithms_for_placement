// preprocessor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int> v1)
{

  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << endl;
  }
}
int secondLargestElement ( vector<int> v1){
  sort(v1.begin(),v1.end());
  int secLargest  = v1[v1.size()-2];
}
// main start here ...
int main()
{

  int size;
  cout << "Enter the size of the vector  : " << endl;
  cin >> size;
  vector<int> v1;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    v1.push_back(n);
  }

  printVector(v1);
  int secondLargestNum = secondLargestElement(v1);
  cout<<"the second largest number is: "<<secondLargestNum;

  return 0;
}