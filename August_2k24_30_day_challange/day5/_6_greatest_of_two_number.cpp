// preprocessor
#include <iostream>
using namespace std;

int greatestNum(int n1, int n2)
{
  if (n1 < 0 || n2 < 0)
  {
    cout << "Error: Both numbers must be positive." << endl;
    return  -1;
  }

  if (n1 > n2)
  {
    return n1;
  }
  else
  {
    return n2;
  }
}
// main start here ...
int main()
{
  int n1;
  cout << "Enter your first number : " << endl;
  cin >> n1;
  int n2;
  cout << "Enter your 2nd number :" << endl;
  cin >> n2;
  cout << "greatest of the two number is : " << greatestNum(n1, n2) << endl;
  return 0;
}