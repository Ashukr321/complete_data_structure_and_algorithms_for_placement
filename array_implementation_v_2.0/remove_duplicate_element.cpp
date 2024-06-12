// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> removeDuplicate(vector<int> v1)
{
  vector<int> result;
  for (int i; i < v1.size(); i++)
  {
    if (i < v1.size() - 1 && v1[i] == v1[i + 1])
    {
      continue;
    }
    else
    {
      result.push_back(v1[i]);
    }
  }
  return result;
}
void print(vector<int> v1)
{

  for (int i = 0; i < v1.size(); i++)
  {
    cout << v1[i] << " ";
  }
}

// main start here ...
int main()
{

  vector<int> v1 = {1, 1, 1, 1, 1, 1, 1, 3, 4, 44};
  cout<<"before removing the duplicate element"<<endl;
  print(v1);
  cout<<endl;
  cout<<"After Removing the Duplicate Elements :"<<endl;
 vector<int> result =  removeDuplicate(v1);
  print(result);
  return 0;
}