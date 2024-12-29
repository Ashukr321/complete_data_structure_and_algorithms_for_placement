#include <iostream>
#include <cmath> // Use <cmath> for the pow function
using namespace std;

int countDigit(int num)
{
    int cnt = 0;
    while (num > 0)
    {
        cnt++;
        num = num / 10;
    }
    return cnt;
}

bool isArmstrong(int num)
{
    if (num < 0) return false; // Armstrong numbers are non-negative
    int temp = num;
    int cntD = countDigit(num);
    int sum = 0;
    while (num != 0)
    {
        int rem = num % 10;
        sum += pow(rem, cntD); // Use pow from <cmath>
        num = num / 10;
    }
    return sum == temp;
}

int main()
{
    int num;
    cout << "Enter your number: " << endl;
    cin >> num;
    if (isArmstrong(num))
    {
        cout << "Number is Armstrong" << endl;
    }
    else
    {
        cout << "Number is not Armstrong" << endl;
    }
    return 0;
}