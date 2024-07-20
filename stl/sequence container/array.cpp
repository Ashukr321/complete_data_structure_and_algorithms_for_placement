#include <iostream>
#include <array>
using namespace std;


void displayArray(const array<int, 4>& arr)
{
  for (auto it = arr.begin(); it != arr.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
}

int main()
{
  array<int, 4> arr;
  for (int i = 0; i < arr.size(); i++)
  {
    cout << "Enter the element at index: " << i << endl;
    cin >> arr[i];
  }
  cout << "Display all the array:" << endl;
  displayArray(arr);
  cout << "front element : " << arr.front() << endl;
  cout << "back element : " << arr.back() << endl;
  cout << "element at index : " << arr.at(1) << endl;
  cout<<"size of the array : number of element "<<arr.size()<<endl;
  cout<<"maximum size of the array :"<< arr.max_size()<<endl;
  return 0;
}