// preprocessor
#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void conquer(int arr[],int start,int end,int mid){
  int mSize = end - start + 1;
  int * mergeArr= new int[mSize];
  int idx1 = start;
  int idx2 = mid+1;
  int x = 0;
  while(idx1<=mid&& idx2<=end){
    if(arr[idx1]<=arr[idx2]){
      mergeArr[x]=arr[idx1];
      x++;
      idx1++;
    }else {
      mergeArr[x]=arr[idx2];
      x++;
      idx2++;
    }
  }
  while(idx1<=mid){
    mergeArr[x]=arr[idx1];
    x++;
    idx1++;
  }
  while(idx2<=end){
    mergeArr[x]=arr[idx2];
    x++;
    idx2++;
  }

  // now merge the array
  for(int i=0,j=start;i<mSize;i++,j++){
    arr[j]=mergeArr[i];
  }

}
void mergeSort(int arr[], int start, int end)
{
  if (start >= end)
  {
    return;
  }
  int mid = start + (end - start) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  conquer(arr,start,end,mid);
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
    cout << "Enter the element " << i + 1 << endl;
    cin >> n;
    arr[i] = n;
  }
  printArr(arr, size);
  mergeSort(arr,0,size-1);
  printArr(arr,size);
  return 0;
}