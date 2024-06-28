#include<iostream>
using namespace std;

int cubeSum(int n){
  if(n == 0){
    return 0;
  }
  return n * n * n + cubeSum(n - 1);
}

int main(){
  int n;
  cout << "Enter your number: " << endl;
  cin >> n;
  int total = cubeSum(n);
  cout << "The sum of the cubes: " << total << endl;
  return 0;
}
