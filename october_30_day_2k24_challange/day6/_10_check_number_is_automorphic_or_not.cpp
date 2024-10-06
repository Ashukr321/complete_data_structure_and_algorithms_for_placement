// preprocessor
#include <iostream>
#include <math.h>
using namespace std;

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
  int countD = countDigit(num);
  int devisor = pow(10, countD);
  int square = pow(num, 2);
  int last = square % devisor;
  return last == num;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (isAutoMorphic(num))
  {
    cout << num << " is an AutoMorphic Number." << endl;
  }
  else
  {
    cout << num << " is not an AutoMorphic Number." << endl;
  }

  return 0;
}