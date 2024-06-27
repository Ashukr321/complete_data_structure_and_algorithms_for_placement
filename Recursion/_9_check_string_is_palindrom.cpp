// preprocessor
#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    return checkPalindrome(str, start + 1, end - 1);
}

// main starts here ...
int main()
{
    string str;
    cout << "Enter your string:" << endl;
    cin >> str;
    cout << "Your string is: " << str << endl;

    if (checkPalindrome(str, 0, str.length() - 1))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
