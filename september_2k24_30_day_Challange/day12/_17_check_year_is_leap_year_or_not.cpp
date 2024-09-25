// preprocessor
#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
  if (year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
  {
    return true;
  }
  return false;
}
// main start here ...
int main()
{
  int year;
  cout << "Enter your year :" << endl;
  cin >> year;
  if (isLeapYear(year))
  {
    cout << year << " is a leap year" << endl;
  }
  else
  {
    cout << year << " is not a leap year" << endl;
  }
  return 0;
}