#include <iostream>
using namespace std;

int replace_all_0_with_1(int num)
{
    int result = 0;
    int multiplier = 1; // To keep track of the place value

    // Process each digit from the least significant to the most significant
    while (num > 0)
    {
        int rem = num % 10; // Get the last digit
        if (rem == 0)
        {
            rem = 1; // Replace 0 with 1
        }
        result = rem * multiplier + result; // Add the digit to the result
        multiplier *= 10; // Move to the next place value
        num /= 10; // Remove the last digit
    }

    return result;
}

int main()
{
    int num;
    cout << "Enter your number: " << endl;
    cin >> num;

    cout << "Before replace: " << num << endl;
    cout << "After replace all 0 with 1: " << replace_all_0_with_1(num) << endl;

    return 0;
}