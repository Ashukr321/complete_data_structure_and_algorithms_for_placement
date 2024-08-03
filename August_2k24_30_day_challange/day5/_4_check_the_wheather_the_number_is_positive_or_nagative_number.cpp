// preprocessor
#include <iostream>
using namespace std;

void checkPosNeg(int num)
{
  if (num < 0)
  {
    cout << "Negative number: " << num << endl;
  }
  else
  {
    cout << "Positive number: " << num << endl;
  }
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  checkPosNeg(num);
  return 0;
}