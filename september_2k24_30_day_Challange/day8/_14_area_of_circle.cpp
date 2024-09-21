#include <iostream>
using namespace std;
#define PI 3.14 // no semicolon needed here

int main()
{
  int r;
  cout << "Enter the value of radius: " << endl; // added a colon for readability
  cin >> r;

  // you might want to calculate and output the area of the circle
  double area = PI * r * r;
  cout << "The area of the circle is: " << area << endl;

  return 0;
}