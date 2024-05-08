#include<iostream>
#include<algorithm>
using namespace std;

bool isPermutation(string str1, string str2) {
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    if (str1 == str2) {
        return true;
    }
    return false;
}

int main() {
    string str1, str2;
    cout << "Enter your first string: " << endl;
    cin >> str1;
    cout << endl;
    cout << "Enter your second string: " << endl;
    cin >> str2;
    if (isPermutation(str1, str2)) {
        cout << "Given strings are permutations" << endl;
    }
    else {
        cout << "Given strings are not permutations" << endl;
    }
    return 0;
}
