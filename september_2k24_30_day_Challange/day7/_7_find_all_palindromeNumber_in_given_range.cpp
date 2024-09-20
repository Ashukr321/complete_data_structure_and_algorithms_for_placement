#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num)
{
  int rev = 0;
  int originalNum = num; 
  while (num != 0)
  {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  return rev == originalNum; 
}

vector<int> getAllPalindromeNum(int start, int end)
{
  vector<int> result;
  for (int i = start; i <= end; i++)
  {
    if (isPalindrome(i)) 
    {
      result.push_back(i);
    }
  }
  return result;
}

int main()
{
  int start, end;
  cout << "Enter starting element: " << endl;
  cin >> start;
  cout << "Enter ending element: " << endl;
  cin >> end;
  vector<int> v = getAllPalindromeNum(start, end);

  for (auto it = v.begin(); it != v.end(); ++it)
  {
    cout << *it << " ";
  }
  return 0;
}