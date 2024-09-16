#include <iostream>
#include <cmath>

void dda_line(int x1, int y1, int x2, int y2) {
    // Calculate the slope of the line
    float m = (float)(y2 - y1) / (x2 - x1);

    // Determine the direction of the line
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    // Initialize the current pixel coordinates
    int x = x1;
    int y = y1;

    // Handle the three cases
    if (m<1) { // Case 1: |m| < 1
        // Loop until the end of the line is reached
        while (x <= x2) {
            // Draw the current pixel
            std::cout << "Drawing pixel at (" << x << ", " << y << ")" << std::endl;

            // Calculate the next pixel coordinates
            x += 1;
            y += round(m);
        }
    } else if (m>1) { // Case 2: |m| > 1
        // Loop until the end of the line is reached
        while (y <= y2) {
            // Draw the current pixel
            std::cout << "Drawing pixel at (" << x << ", " << y << ")" << std::endl;

            // Calculate the next pixel coordinates
            x += round(1 / m);
            y += 1;
        }
    } else { // Case 3: |m| = 1
        // Loop until the end of the line is reached
        while (m==1) {
            // Draw the current pixel
            std::cout << "Drawing pixel at (" << x << ", " << y << ")" << std::endl;

            // Calculate the next pixel coordinates
            x += 1;
            y += 1;
        }
    }
}

int main() {
    // Example usage
    dda_line(1, 1, 8, 7); 
    // dda_line(0, 0, 10, 5);  
    // dda_line(0, 0, 5, 10);  

    return 0;
}