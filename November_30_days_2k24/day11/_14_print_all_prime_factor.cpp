// preprocessor
#include <iostream>
#include <vector>
using namespace std;


vector<int> getAllPrimeFactor(int num)
{
  vector<int> result;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      result.push_back(i);
    }
  }
  return result;
}
bool isPrime(int num ){
    if(num<=1){
      return false;
    }
    for(int i = 2; i<num;i++){
      if(num%i==0){
        return false;
      }
    }
    return true;
}
// main start here ...
int main()
{
  int num;
  cout << "Enter your number :" << endl;
  cin >> num;
 vector <int> result  = getAllPrimeFactor(num);
 for(auto it= result.begin(); it!=result.end();it++){
   if(isPrime(*it)){
    cout << *it<<" ";
   }
 }



  return 0;
}

