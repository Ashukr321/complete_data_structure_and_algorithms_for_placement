#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate and print the roots of the quadratic equation
void calculateRoots(int a, int b, int c) {
    int d = b * b - 4 * a * c; // Discriminant

    if (d > 0) {
        cout << "Roots are real and distinct." << endl;
        cout << "Root 1: " << (-b + sqrt(d)) / (2 * a) << endl;
        cout << "Root 2: " << (-b - sqrt(d)) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "Roots are real and equal." << endl;
        cout << "Root 1 and Root 2: " << (-b) / (2 * a) << endl;
    } else {
        cout << "Roots are imaginary and distinct." << endl;
        cout << "Root 1: " << -b / (2 * a) << " + " << sqrt(-d) / (2 * a) << "i" << endl;
        cout << "Root 2: " << -b / (2 * a) << " - " << sqrt(-d) / (2 * a) << "i" << endl;
    }
}

// Main function
int main() {
    int a, b, c;
    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;

    // Check if 'a' is zero to avoid division by zero
    if (a == 0) {
        cout << "Coefficient 'a' cannot be zero in a quadratic equation." << endl;
        return 1; // Exit with an error code
    }

    calculateRoots(a, b, c); // Call the function to calculate roots

    return 0;
}