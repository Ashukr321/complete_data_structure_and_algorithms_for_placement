
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <chrono>
#include <thread>

// Function to calculate data transfer rate
void calculateDataTransferRate(double dataSize, double transferTime, sf::Text& text) {
    // Calculate data transfer rate in bytes per second (B/s)
    double transferRateBytes = dataSize / transferTime;
    std::string textString = "Data transfer rate: " + std::to_string(transferRateBytes) + " B/s, ";

    // Calculate data transfer rate in kilobytes per second (KB/s)
    double transferRateKilobytes = transferRateBytes / 1024;
    textString += std::to_string(transferRateKilobytes) + " KB/s, ";

    // Calculate data transfer rate in megabytes per second (MB/s)
    double transferRateMegabytes = transferRateKilobytes / 1024;
    textString += std::to_string(transferRateMegabytes) + " MB/s";

    text.setString(textString);
}

int main() {
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Live Data Transfer Rate");

    // Create a font for the text
    sf::Font font;
    font.loadFromFile("arial.ttf");

    // Create a text object to display the data transfer rate
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::White);
    text.setPosition(10, 10);

    // Set data size in bytes
    double dataSize = 0;

    // Initialize start time
    auto startTime = std::chrono::high_resolution_clock::now();

    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Simulate data transfer (e.g., file copy, network transfer)
        // Replace this with your actual data transfer code
        dataSize += 1024; // increment data size by 1 KB

        // Calculate transfer time in seconds
        auto endTime = std::chrono::high_resolution_clock::now();
        double transferTime = std::chrono::duration_cast<std::chrono::seconds>(endTime - startTime).count();

        // Calculate data transfer rate
        calculateDataTransferRate(dataSize, transferTime, text);

        // Clear the window
        window.clear();

        // Draw the text
        window.draw(text);

        // Display the window
        window.display();

        // Sleep for a short duration to avoid high CPU usage
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}