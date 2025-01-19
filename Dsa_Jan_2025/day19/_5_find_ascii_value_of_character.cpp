#include <iostream>
using namespace std;

int getAscii(char ch)
{
    // Corrected the if condition by enclosing it in parentheses
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        int ascii = static_cast<int>(ch); // Explicitly cast char to int for clarity
        return ascii;
    }
    return -1; // Return -1 if the character is not an alphabetic character
}

// main starts here ...
int main()
{
    char ch;
    cout << "Enter your character: " << endl;
    cin >> ch;
    int asciiValue = getAscii(ch); // Store the result in a variable
    if (asciiValue != -1) {
        cout << "ASCII value: " << asciiValue << endl; // Print the ASCII value
    } else {
        cout << "The character is not an alphabetic character." << endl; // Inform the user
    }

    return 0;
}