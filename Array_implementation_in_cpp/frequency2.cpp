//preprocessor
#include<iostream>
#include<map>
using namespace std;


//main start here ...
int main(){
    int size ;
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
      int n;
      cout << "Enter element  at index: "<<i<<endl;
      cin >>n;
      arr[i] = n;
    }

    //create the map 

    map<int,int > frequencyMap;
    for (int i = 0; i < size; i++)
    {
      frequencyMap[arr[i]]++;
    }
    
    for (auto it: frequencyMap)
    {
      cout<<it.first<<"->"<<it.second <<endl;
    }
    
  return 0;
}