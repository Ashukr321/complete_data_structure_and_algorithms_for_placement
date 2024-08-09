//preprocessor
#include<iostream>
using namespace std;


int evenNumSum(int num,int sum =0){
  
  //base case 
  if(num==0){
    return sum;
  }
  if(num%2==0){
    sum+=num;
  }
return evenNumSum(num-1,sum);
}

//main start here ...
int main(){
  int num;
  cout<<"Enter the number : "<<endl;
  cin>>num;
  cout<<"the sum of the even  number from n to 1 "<< evenNumSum(num)<<endl;
  return 0;
}