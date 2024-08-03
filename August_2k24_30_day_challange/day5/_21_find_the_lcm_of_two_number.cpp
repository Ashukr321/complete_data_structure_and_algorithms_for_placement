// preprocessor
#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int getLCM(int a, int b) {
  return (a * b) / gcd(a, b); 
}

// Main function
int main() {
  int n1;
  cout << "Enter the first number (n1): " << endl;
  cin >> n1;

  int n2;
  cout << "Enter the second number (n2): " << endl;
  cin >> n2;

  cout << "LCM of the two numbers " << n1 << " and " << n2 << " is: " << getLCM(n1, n2) << endl;

  return 0;
}