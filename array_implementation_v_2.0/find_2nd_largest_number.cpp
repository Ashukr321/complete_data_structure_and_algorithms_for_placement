// preprocessor
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void secondLargestNum(vector<int> v1)
{
  sort(v1.begin(),v1.end());
  if (v1.size() > 2)
  {
    int secondLargestNum = v1[v1.size() - 2];
    cout << "Second largest number is : " << secondLargestNum << endl;
  }
  else
  {
    cout << "vector does't have enough element " << endl;
  }
}

// main start here ...
int main()
{
  vector<int> v1;
  int size;
  cout << "Enter the size of  the vector : " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index: " << i << endl;
    cin >> n;
    v1.push_back(n);
  }
  secondLargestNum(v1);
  return 0;
}