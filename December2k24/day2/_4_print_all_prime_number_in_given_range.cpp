#include <iostream>
#include <cmath> // for sqrt
using namespace std;

bool isPrime(int num)
{
    if (num <= 1) return false; 
    for (int i = 2; i <= sqrt(num); i++) 
    {
        if (num % i == 0)
        {
            return false; 
        }
    }
    return true;
}

void printAllPrimeNumber(int start, int end)
{
    int count = 0;
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i)) 
        {
            cout << i << " ";
            count++;
        }
    }
    cout << "\ntotal prime number is: " << count << endl;
}

// main starts here ...
int main()
{
    printAllPrimeNumber(1, 100);
    return 0;
}