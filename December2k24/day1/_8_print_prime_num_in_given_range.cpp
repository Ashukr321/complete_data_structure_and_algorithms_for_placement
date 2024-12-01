// preprocessor
#include <iostream>
using namespace std;

bool isPrime(int num)
{
  if (num <= 1)
  {
    return false;
  }
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
 
  return true;
}

void printPrimeNumInGivenRange(int start, int end)
{
    int count = 0;
  for (int i = start; i < end; i++)
  {
    if (isPrime(i))
    {
      count++;
      cout << i << " ";
    }
  }
  cout<<endl;
  cout<<"total prime number are :"<< count <<endl;
}

// main start here ...
int main()
{
  int start, end;
  cout << "Enter your start number " << endl;
  cin >> start;

  cout << "Enter your end number " << endl;
  cin >> end;
  printPrimeNumInGivenRange(start,end);
  return 0;
}