#include <iostream>
using namespace std;

int countChar(string str) {
    int cnt = 0;
    for (int i = 0; i < str.length(); i++) {
        cnt++;
    }
    return cnt;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "The number of characters in the string is: " << countChar(str) << endl;
    return 0;
}