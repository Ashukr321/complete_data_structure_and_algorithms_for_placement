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
    num /= 10;
  }
  return cd;
}

bool isAutomorphicNum(int num)
{
  int originalNum = num;
  int digit = countDigit(num);
  int devisor = pow(10, digit); 
  int square = num * num;
  int last = square % devisor;
  return originalNum == last;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
  if (isAutomorphicNum(num))
  {
    cout << "The number is an Automorphic Number" << endl;
  }
  else
  {
    cout << "The number is not an Automorphic Number" << endl;
  }
  return 0;
}