//preprocessor
#include<iostream>
#include<map>
using namespace std;


void printArray(int arr[],int size){
  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }

}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    int n;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  cout<<"The array is: "<<endl;
  printArray(arr,size);
  // create the map ,bec-- map store the key value pair 
  map<int,int> freqMap;
  for (int i = 0; i < size; i++)
  {
    freqMap[arr[i]]++;
  }

  cout<<"display the freq.map"<<endl;
  
  for(auto it: freqMap){
    cout<<it.first<<" ->>>> "<<it.second<<endl;
  }
  
  
  return 0;
}