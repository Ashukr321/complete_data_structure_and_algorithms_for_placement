#include <iostream>

// Function to check if a number is perfect
bool isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isPerfect(num)) {
        std::cout << num << " is a perfect number." << std::endl;
    } else {
        std::cout << num << " is not a perfect number." << std::endl;
    }

    return 0;
}