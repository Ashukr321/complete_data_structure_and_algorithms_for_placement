// preprocessor
#include <iostream>
using namespace std;
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  
}
int linearSearch(int arr[], int size, int key){
  for (int i = 0; i < size; i++)
  {
      if(arr[i]==key){
        return i;
      }
  }
  return -1;
  
}
// main start here ...
int main()
{
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
  printArray(arr,size);
  cout<<endl;
  int index = linearSearch(arr,size,5);
  if(index!=-1){
    cout << "Element found -> " <<index<< endl;
  }
  else{
    cout << "Element not found" << endl;
  }


  return 0;
}