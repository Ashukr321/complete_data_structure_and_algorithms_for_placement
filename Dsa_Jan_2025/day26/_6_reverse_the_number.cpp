#include <iostream>
using namespace std;

int reverseNum(int num, int &reverse) {
    // Base case: if num is 0, return the reverse
    if (num == 0) {
        return reverse; // This return is not necessary, but can be kept for clarity
    }
    
    // Update reverse and call the function recursively
    reverse = reverse * 10 + num % 10;
    return reverseNum(num / 10, reverse);
}

// Main starts here ...
int main() {
    int num;
    cout << "Enter your digit: ";
    cin >> num;
    
    int reverse = 0; // Initialize reverse to 0
    reverseNum(num, reverse); // Call the function to reverse the number
    
    cout << "Reverse of number: " << reverse << endl;

    return 0;
}