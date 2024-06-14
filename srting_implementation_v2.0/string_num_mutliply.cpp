//preprocessor
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string multiply (string a, string b ){
  int num1 = stoi(a);
  int num2 = stoi (b);
  int result = num1* num2;
  stringstream ss;
  ss<<result;
  return ss.str();
}


//main start here ...
int main(){
  string a  , b;
  cout<<"Enter the first string number "<<endl;
  cin>>a;
  cout<<"Enter the 2nd string number : "<<endl;
  cin>>b;
  cout<<multiply(a,b)<<endl;
  return 0;
}