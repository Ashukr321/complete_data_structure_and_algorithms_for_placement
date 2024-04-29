//preprocessor
#include<iostream>
#include<vector>
using namespace std;





// print the array 
void printArray (vector<int> arr){
  for (auto it:arr)
  {
     cout << it << " ";
  }
}
//main start here ...
int main(){
   vector<int>arr = {10, 7 , 4, 5,6 };
   int n= arr.size();
   cout<<"Before  sorting: "<<endl;
   printArray(arr);
   cout<<"After sorting : "<<endl;

  return 0;
}