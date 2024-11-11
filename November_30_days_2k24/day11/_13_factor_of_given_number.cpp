// preprocessor
#include <iostream>
using namespace std;

void factorOfNum(int num)
{
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      cout << i << " ,";
    }
  }
}
// main start here ...
int main()
{
  int num;
  cout << "Enter the number : " << endl;
  cin >> num;
  factorOfNum(num);
  return 0;
}