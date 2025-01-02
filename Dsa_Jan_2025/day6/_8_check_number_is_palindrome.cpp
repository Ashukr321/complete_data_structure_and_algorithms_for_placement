// preprocessor
#include <iostream>
using namespace std;

<<<<<<< Tabnine <<<<<<<
/**//+
 * @brief Checks if a given number is a palindrome.//+
 *//+
 * A palindrome is a number that remains the same when its digits are reversed.//+
 * This function takes an integer as input and returns true if the number is a palindrome,//+
 * and false otherwise.//+
 *//+
 * @param num The number to be checked.//+
 * @return True if the number is a palindrome, false otherwise.//+
 *///+
bool isPalindrome(int num)
{
  int rev = 0;
  int temp = num;
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return rev == temp;
}
>>>>>>> Tabnine >>>>>>>// {"conversationId":"862a738e-cc82-4c16-bd8d-0695c8ed1622","source":"instruct"}


// main start here ...
int main()
{
  int num;
  cout << "Enter your number " << endl;
  cin >> num;
  if (isPalindrome(num))
  {
    cout << "Number is palindrome " << endl;
  }
  else
  {
    cout << "Number is not palindrome " << endl;
  }

  return 0;
}