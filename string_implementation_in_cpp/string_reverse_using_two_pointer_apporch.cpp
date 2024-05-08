#include <iostream>
using namespace std;

string reverseStr(string str)
{
    int l = 0;
    int r = str.length() - 1;
    while (l < r)
    {
        char temp = str[l];  // Using char instead of int to store characters
        str[l] = str[r];
        str[r] = temp;
        l++;
        r--;
    }
    return str;  // Return the reversed string
}

int main()
{
    string str;
    cout << "Enter your string: " << endl;
    cin >> str;

    cout << "Before reversing the string : " << str << endl;
    string reverseString = reverseStr(str);
    cout << "After reversing the string : " << endl;
    cout << reverseString << endl;

    return 0;
}
