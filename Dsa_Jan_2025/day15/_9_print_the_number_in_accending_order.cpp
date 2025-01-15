//preprocessor
#include<iostream>
using namespace std;


// recursion print number 
void printNum(int n){
  //base case
  if(n==0){
    return ;
  }
   printNum(n-1);
  cout<<n<<endl;
}
//main start here ...
int main(){
  int n;
  cout<<"Enter your number "<<endl;
  cin>>n;
  printNum(n);

  return 0;
}