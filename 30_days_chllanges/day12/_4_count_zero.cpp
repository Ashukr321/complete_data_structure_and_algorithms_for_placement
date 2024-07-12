// preprocessor
#include <iostream>
using namespace std;

int countZero(int n, int count = 0)
{
  if (n == 0)
  {
    return count;
  }
  if (n % 10 == 0)
  {
    count++;
  }
  return countZero(n / 10, count);
}

// main start here...
int main()
{
  int n;
  cout << "Enter your number: " << endl;
  cin >> n;
  if (n < 0)
  {
    cout << "Please enter a non-negative integer." << endl;
    return 1; // error code
  }
  cout << "The number of zeros: " << countZero(n) << endl;
  return 0;
}