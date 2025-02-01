#include <iostream>
#include <cstdlib> // For rand()
using namespace std;

void generateRandomNumber(int num1, int num2)
{
  int random_number = num1 + 1 + (rand() % ((num2 - 1) - (num1 + 1) + 1));
  cout << random_number << endl;
}

/*

Components of the Code
rand():
This function generates a pseudo-random integer between 0 and RAND_MAX (a constant defined in <cstdlib>). The value of RAND_MAX is implementation-defined but is typically at least 32767.

(num2 - 1) - (num1 + 1) + 1:

This part calculates the range of possible values for the random number.
num2 - 1: This is the upper limit of the range (exclusive of num2).
num1 + 1: This is the lower limit of the range (exclusive of num1).

The expression (num2 - 1) - (num1 + 1) gives the difference between the upper and lower limits, which tells us how many integers are available in the range.

Adding 1 to this difference accounts for the inclusive nature of the range when using the modulus operator.

rand() % ((num2 - 1) - (num1 + 1) + 1):

The modulus operator % is used to limit the output of rand() to a specific range.
This expression will yield a random integer between 0 and the calculated range (inclusive). Essentially, it gives you a random offset from the lower limit.

num1 + 1 + (...):

Finally, we add num1 + 1 to the result of the modulus operation.
This shifts the range from starting at 0 (the result of rand() % ...) to starting at num1 + 1.
Therefore, the final value of random_number will be between num1 + 1 and num2 - 1, which is the desired range.

Example
Let's say we call generateRandomNumber(1, 10):

num1 = 1
num2 = 10


Calculating the range:
Lower limit: num1 + 1 = 1 + 1 = 2
Upper limit: num2 - 1 = 10 - 1 = 9
Now, the expression becomes:


int random_number = 2 + (rand() % (9 - 2 + 1));

., 
int random_number = 2 + (rand() % 8);

The rand() % 8 will yield a value between 0 and 7, so when you add 2, the final random_number will be between 2 and 9, which excludes both 1 and 10.

*/

// Main starts here ...
int main()
{
  int num1, num2;
  cout << "Enter the number 1: " << endl;
  cin >> num1;
  cout << "Enter the number 2: " << endl;
  cin >> num2;

  generateRandomNumber(num1, num2);
  return 0;
}
