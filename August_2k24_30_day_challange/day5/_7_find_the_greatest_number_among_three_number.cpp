// preprocessor
#include <iostream>
#include<algorithm>
using namespace std;

// int greatestOfThree(int n1,int n2 ,int n3){
//   if(n1>=n2&& n1>=n3){
//     return n1;
//   }else if(n2>=n1&& n2>=n3){
//     return n2;
//   }else {
//     return n3;
//   }
// }
int greatestOfThree(int n1 ,int n2 ,int n3){
  return max(n1,n2,n3);
}
// main start here ...
int main()
{
  int n1;
  cout << "Enter your first number " << endl;
  cin>>n1;
  int n2;
  cout << "Enter your 2nd number " << endl;
  cin >> n2;
  int n3;
  cout << "Enter your 3rd number " << endl;
  cin >> n3;
  cout << "greatest number among 3 number " << greatestOfThree(n1, n2, n3) << endl;

  return 0;
}