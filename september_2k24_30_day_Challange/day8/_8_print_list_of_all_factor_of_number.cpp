// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> getAllFactor(int num)
{
  vector<int> result;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      result.push_back(i);
    }
  }
  return result;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number: " << endl;
  cin >> num;
  vector<int> v1 = getAllFactor(num);
  for (auto it = v1.begin(); it != v1.end(); it++)
  {
    cout << *it << " ,";
  }
  return 0;
}