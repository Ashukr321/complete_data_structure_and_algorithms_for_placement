//preprocessor
#include<iostream>
#include<map>
using namespace std;

void findFreqOfElement(int arr[],int size,int element){
  // create the map
  map<int,int> freqMap;
  for(int i = 0; i<size; i++){
    freqMap[arr[i]]++;
  }
  bool found = false;
  for(auto it = freqMap.begin(); it != freqMap.end();it++){
    if(it->first == element){
      found = true;
      cout<<"The frequency of element "<<element<<" is "<<it->second<<endl;
    }
  }

  if(!found){
    cout<<"Element not found in the array"<<endl;
  }

}


//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array "<<endl;
  cin>>size;
  int arr[size];
  
  for(int i = 0 ; i<size; i++){
    int n ;
    cout<<"Enter the element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  findFreqOfElement(arr,size,5);
  
  return 0;
}