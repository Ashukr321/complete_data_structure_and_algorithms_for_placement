// preprocessor
#include <iostream>
using namespace std;

void printFactor(int num)
{
  int count = 0;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      count++;
      cout << i << endl;
    }
  }

  cout << "the total factor are: " << count << endl;
}

// main start here ...
int main()
{
  int num;
  cout << "Enter the number : ";
  cin >> num;
  printFactor(num);
  return 0;
}