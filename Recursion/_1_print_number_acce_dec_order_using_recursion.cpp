// preprocessor
#include <iostream>
using namespace std;

void printNum(int n)
{
  // base case
  if (n == 0)
  {
    return;
  }
  // recursive call the function
  printNum(n - 1);
  cout << n << " ";

}

// main start here ...
int main()
{

  int n;
  cout << "Enter your number : " << endl;
  cin >> n;


  printNum(n);

  return 0;
}
//  Recursion  function call itself 
//  application 
// use in tree and dp and many some important data structure 
// printing the linked list using recursion 
// recursion use stack data structure to implement it 
// it to implement recursion we have to use the extra memory spaces 
