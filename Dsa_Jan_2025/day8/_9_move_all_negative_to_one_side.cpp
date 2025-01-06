// preprocessor
#include <iostream>
using namespace std;

// print array
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << "";
  }
  cout << endl;
}

void moveNegOneSide(int arr[],int size){
  int j = 0; 
  for(int i = 0 ; i<size; i++){
    if(arr[i]<0){
      swap(arr[j],arr[i]);
      j++;
    }
  }
}
// main start here ...
int main()
{

  int size;
  cout << "Enter the size of the array " << endl;
  cin >> size;
  int arr[size];

  for (int i = 0; i < size; i++)
  {
    int n;
    cout << "Enter the element at index:" << i << endl;
    cin >> n;
    arr[i] = n;
  }

  cout<<"Before move "<<endl;
  printArray(arr,size);
  cout<<"After move "<<endl;
  moveNegOneSide(arr,size);
  printArray(arr,size);

  return 0;
}