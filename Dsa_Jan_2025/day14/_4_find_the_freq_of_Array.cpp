//preprocessor
#include<iostream>
#include<map>
using namespace std;



void freqArray(int arr[],int size){
  map<int,int>freqMap;
  for(int i = 0; i<size; i++){
    freqMap[arr[i]]++;
  }
  // print the frequency of each element
  for(auto i = freqMap.begin(); i!=freqMap.end();i++){
    cout<<"The frequency of "<<i->first<<" is : "<<i->second<<endl;
  }

}
//main start here ...
int main(){
  int size;
  cout<<"Enter the size of the array :"<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0 ; i<size; i++){
    int n ;
    cout<<"Enter the  element at index:"<< i <<endl;
    cin>>n;
    arr[i] = n;
  }
  freqArray(arr,size);

  return 0;
}