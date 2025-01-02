//preprocessor
#include<iostream>
using namespace std;

int maxOfThree(int a,int b ,int c){
  if(a>b&& a>c){
    return a;
  }else if(b>a && b>c){
    return b;
  }else{
    return c;
  }
}

//main start here ...
int main(){
  int a, b,c;
  cout << "Enter three numbers: ";
  cin>>a>>b>>c;
  cout << "The maximum of the three numbers is: "<<maxOfThree(a,b,c)<<endl;

  return 0;
}