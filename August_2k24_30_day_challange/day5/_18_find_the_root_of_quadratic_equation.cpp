#include <iostream>
#include <cmath>
using namespace std;

// Function to find the roots of a quadratic equation
void findRoots(double a, double b, double c) {
    // Calculate the determinant (b^2 - 4ac)
    double determinant = b * b - 4 * a * c;

    // Check if the determinant is positive, negative, or zero
    if (determinant > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(determinant)) / (2 * a);
        double root2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (determinant == 0) {
        // Two equal real roots
        double root = -b / (2 * a);
        cout << "Roots are real and equal." << endl;
        cout << "Root: " << root << endl;
    } else {
        // Two complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "Roots are complex." << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}

int main() {
    double a, b, c;

    // Input coefficients
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Find and display roots
    findRoots(a, b, c);

    return 0;
}