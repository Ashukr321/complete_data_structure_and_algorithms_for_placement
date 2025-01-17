//preprocessor
#include<iostream>
#include<map>
using namespace std;


void calculateNumber(int arr[],int size){
  map<int,int>freqMap;
  for(int i = 0 ; i<size;i++){
    freqMap[arr[i]]++;
  }

  for(auto it= freqMap.begin() ; it!= freqMap.end();it++){
    cout<<it->first<<"->"<< it->second<<endl;
  }

}
//main start here ...
int main(){
  int size ;
  cout<<"Enter your number :"<<endl;
  cin>>size;
  int arr[size];
  for(int i = 0 ; i<size;i++){
    int n;
    cout<<"Enter your number "<< i+1<<endl;
    cin>>n;
    arr[i]=n;
  }
  calculateNumber(arr,size);

  return 0;
}