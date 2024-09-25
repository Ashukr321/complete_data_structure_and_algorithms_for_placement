// preprocessor
#include <iostream>
using namespace std;
#include <math.h>
int countDigit(int num)
{
  int cd = 0;
  while (num != 0)
  {
    cd++;
    num = num / 10;
  }
  return cd;
}
bool isAutoMorphic(int num)
{
  int cd = countDigit(num);
  int devisor = pow(10, cd);
  int square = num * num;
  int last = square % devisor;
  return last == num;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isAutoMorphic(num))
  {
    cout << "The number is AutoMorphic" << endl;
  }
  else
  {
    cout << "The number is not AutoMorphic" << endl;
  }
  return 0;
}