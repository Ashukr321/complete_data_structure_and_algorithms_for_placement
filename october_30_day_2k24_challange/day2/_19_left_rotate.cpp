// preprocessor
#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
vector<int>  rotateArr(vector<int> arr){
  int temp = arr[0];
 vector<int> leftRotate(arr.begin()+1,arr.end());
  leftRotate.push_back(temp);
  return leftRotate;
  
}
// main start here ...
int main()
{
  int size;
  cout << "Enter the size of the array :" << endl;
  cin >> size;
  vector<int> v;

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    v.push_back(n);
  }

  cout<<"before 1 left rotation "<<endl;
  for(auto it = v.begin();it!= v.end();it++){
    cout<<*it<<" ";
  }

  cout<<"after 1 left rotation "<<endl;
  vector<int> result =  rotateArr(v);
   for(auto it = result.begin();it!= result.end();it++){
    cout<<*it<<" ";
  }
  return 0;
}