// preprocessor
#include <iostream>
using namespace std;

int countDigit(int num)
{
  int cd = 0;
  while (num != 0)
  {
    cd++;
    num = num / 10;
  }
  return cd;
}

int replaceZeroWithOne(int num)
{
  string strNum = to_string(num);
  int cd = countDigit(num);
  for (int i = 0; i < cd; i++)
  {
    if (strNum[i] == '0') // note the single quotes around '0'
    {
      strNum[i] = '1';
    }
  }
  return stoi(strNum);
}

// main start here ...
int main()
{
  int num = 1200043;
  
  cout << replaceZeroWithOne(num)<< endl;
  return 0;
}