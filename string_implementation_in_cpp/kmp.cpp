#include <iostream>
#include <vector>
#include <string>

// Function to compute the failure function (prefix table)
std::vector<int> computeLPS(const std::string& pattern) {
    int m = pattern.length();
    std::vector<int> lps(m, 0);
    int len = 0;
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

// Function to perform string matching using KMP algorithm
std::vector<int> kmpSearch(const std::string& text, const std::string& pattern) {
    std::vector<int> positions;
    int n = text.length();
    int m = pattern.length();
    std::vector<int> lps = computeLPS(pattern);
    int i = 0, j = 0;

    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        if (j == m) {
            positions.push_back(i - j);
            j = lps[j - 1];
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return positions;
}

int main() {
    std::string text = "ababcababcabcabc";
    std::string pattern = "abcabc";
    
    std::vector<int> positions = kmpSearch(text, pattern);
    
    if (positions.empty()) {
        std::cout << "Pattern not found in the text." << std::endl;
    } else {
        std::cout << "Pattern found at positions: ";
        for (int pos : positions) {
            std::cout << pos << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
