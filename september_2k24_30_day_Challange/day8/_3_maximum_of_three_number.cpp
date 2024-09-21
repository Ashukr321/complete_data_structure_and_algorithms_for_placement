// preprocessor
#include <iostream>
using namespace std;

int maxNum(int n1, int n2, int n3)
{
  if (n1 > n2 && n1 > n3)
  {
    return n1;
  }
  else if (n2 > n1 && n2 > n3)
  {
    return n2;
  }
  else
  {
    return n3;
  }
}
// main start here ...
int main()
{
  int n1, n2, n3;
  cout << "Enter   your 1 number :" << endl;
  cin >> n1;
  cout << "Enter your 2 number :" << endl;
  cin >> n2;
  cout << "Enter your 3 number :" << endl;
  cin >> n3;
  cout << "Maximum of " << n1 <<" ," << n2  <<" ," << n3 <<", " << "is  = " << maxNum(n1, n2, n3) << endl;
  return 0;
}