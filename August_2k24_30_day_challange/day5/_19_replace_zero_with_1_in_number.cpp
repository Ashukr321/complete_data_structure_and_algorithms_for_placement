// preprocessor
#include <iostream>
#include <string> // include string library
using namespace std;

// Function to replace zeros with ones in a number
int replaceZeroWithOnes(int num) {
    string strNum = to_string(num);
    for (char &digit : strNum) {
        if (digit == '0') {
            digit = '1';
        }
    } // close the for loop here
    return stoi(strNum);
} // close the function here

// main start here ...
int main() {
    int num;
    cout << "Enter your number : " << endl;
    cin >> num;
    cout << "Before replacing the 0 with 1 " << endl;
    cout << num << endl;
    cout << "After replacing the number : " << endl;
    cout << replaceZeroWithOnes(num) << endl;

    return 0;
}