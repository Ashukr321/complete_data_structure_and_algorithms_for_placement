// preprocessor
#include <iostream>
using namespace std;

int sumOfAp(int noOfTerm, int firstTerm, int lastTearm)
{
  int sum = (noOfTerm / 2) * (firstTerm + lastTearm);
  return sum;
}

// main start here ...
int main()
{
  int nt;
  cout << "Enter the number of term " << endl;
  cin >> nt;
  int firstTerm;
  cout << "Enter the first term " << endl;
  cin >> firstTerm;
  int lastTerm;
  cout << "Enter the lastTerm" << endl;
  cin >> lastTerm;
  int sum = sumOfAp(nt, firstTerm, lastTerm);
  cout << "the sum of the ap is " << sum << endl;
  return 0;
}