#include <iostream>
#include <string>
using namespace std;

int main() {
  int x, n, sum = 0;
  cin >> x >> n;

  for (int i = 1; i <= n; i++) {
    string term = "";
    for (int j = 0; j < i; j++) {
      term += to_string(x);
    }
    sum += stoi(term);
  }
  cout << sum;
  return 0;
}