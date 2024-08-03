// preprocessor
#include <iostream>
#include <vector>
using namespace std;

vector<int> findFactor(int num)
{
  vector<int> factors;
  for (int i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      factors.push_back(i);
    }
  }
  return factors;
}

// main start here ...
int main()
{
  int num ;
  cout<<"Enter your number :"<<endl;
  cin>>num;
  vector<int> facNum = findFactor(num);
  for(auto n:facNum){
    cout<<n<<endl;
  }

  return 0;
}