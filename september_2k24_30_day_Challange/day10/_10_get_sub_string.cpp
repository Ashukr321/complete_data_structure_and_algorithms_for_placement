// preprocessor
#include<iostream>
using namespace std;

string getSubString(string str, int start, int end){
    return str.substr(start, end - start + 1);
}

// main starts here ...
int main(){
    string str;
    cout << "Enter your string: " << endl;
    cin >> str;
    int start, end;
    cout << "Enter the starting point of the subString: " << endl;
    cin >> start;
    cout << "Enter the end point of the subString: " << endl;
    cin >> end;
    cout << "The subString is: " << getSubString(str, start, end) << endl;
    return 0;
}