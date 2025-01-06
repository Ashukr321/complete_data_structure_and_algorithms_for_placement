// Preprocessor
#include <iostream>
#include <map>
using namespace std;

// Main starts here ...
int main() {
    map<int, string> m;
    m[1] = "babbar";
    m[2] = "love";
    m[13] = "kumar";
    m.insert({5, "bheem"});

    cout << "Before erase:" << endl;
    for (auto i : m) {
        cout << i.first << " " << i.second << endl;
    }



    return 0;
}