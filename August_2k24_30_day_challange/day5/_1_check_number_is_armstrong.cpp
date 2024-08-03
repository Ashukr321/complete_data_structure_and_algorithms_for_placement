// preprocessor
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isArmStrong(int num)
{
  int originalNum = num;
  int sum = 0;
  int cDigit = 0;
  int temp = num;
  while (temp!= 0)
  {
    cDigit++;
    temp = temp / 10;
  }
  while (num!= 0)
  {
    int digit = num % 10;
    sum = sum + pow(digit, cDigit);
    num = num / 10;
  }
  return originalNum == sum;
}

vector<int> findAllArmstrong(int start, int end)
{
  vector<int> armstrongNumbers;
  for (int num = start; num <= end; num++) // change num to num++ and add <=
{
    if (isArmStrong(num))
    {
      armstrongNumbers.push_back(num);
    }
  }
  return armstrongNumbers;
}

// main start here...
int main()
{
  vector<int> armstrongNumbers = findAllArmstrong(100, 1000);
  for (auto num : armstrongNumbers)
  {
    cout << num << endl;
  }
  return 0;
}