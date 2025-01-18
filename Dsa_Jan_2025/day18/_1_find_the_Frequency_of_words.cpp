// Preprocessor directives
#include <iostream>
#include <map>
#include <sstream>

using namespace std;

void freqParagraph(string str) {
    map<string, int> freqWords;
    string word = "";
    istringstream stream(str);

    while (stream >> word) {
       
        if (!word.empty()) {
            freqWords[word]++;
        }
    }

    // Output the word frequencies
    for (auto it = freqWords.begin(); it != freqWords.end(); it++) {
        cout << it->first << " => " << it->second << endl;
    }
}

// Main starts here ...
int main() {
    string str;
    cout << "Enter your string: " << endl;
    getline(cin, str);
    cout << "You entered: " << str << endl;
    freqParagraph(str);
    return 0;
}