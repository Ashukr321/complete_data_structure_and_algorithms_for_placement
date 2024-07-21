//preprocessor
#include<iostream>
using namespace std;

void printNum(int n ){
  // base case 
  if(n<1){
    return;
  }
  // recursive case
  printNum(n-1);
  cout<<n<<" ,";
};

//main start here ...
int main(){
  printNum(10);
  return 0;
}