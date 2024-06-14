// preprocessor
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool checkPermutation(string str1, string str2)
{
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());
  return str1 == str2;
}
// main start here ...
int main()
{
  string str1, str2;
  cout << "Enter your first string :" << endl;
  cin >> str1;
  cout << "Enter your 2nd string :" << endl;
  cin >> str2;
   if( checkPermutation(str1,str2)){
    cout<<"Enter your string is permutation "<<endl;
   }else{
    cout<<"Enter your string is not permutation "<<endl;
   }
  return 0;
}