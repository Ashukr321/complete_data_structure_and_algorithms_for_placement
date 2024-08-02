// preprocessor
#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num)
{
  int reverseNum = 0;
  int original = num;
  while (num != 0)
  {
    int digit = num % 10;
    reverseNum = reverseNum * 10 + digit;
    num = num / 10;
  }
  return original == reverseNum;
}
vector<int> findAllPalindrome(int start, int end)
{
  vector<int> palindromes;
  for (int num = start; num < end; num++)
  {
    if (isPalindrome(num))
    {
      palindromes.push_back(num);
    }
  }
  return palindromes;
}

// main start here ...
int main()
{

  int start;
  cout << "Enter the start index of the range " << endl;
  cin >> start;
  int end;
  cout << "Enter the end index of the range :" << endl;
  cin >> end;
  vector<int> palindromes = findAllPalindrome(start, end);
  for (auto num : palindromes)
  {
    cout << num << endl;
  }

  return 0;
}

//  iterator in the cpp 
// five types of iterator are present in the cpp 
// bifor 
// b -> bidirectional
// i- > input iterator 
// f - forward iterator 
// o -> output iterator 
// r -> random assess iterator 