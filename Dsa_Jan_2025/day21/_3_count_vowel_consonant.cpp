//preprocessor
#include<iostream>
using namespace std;

void countVowelConsonant(string str) {
    int countVowel = 0;
    int countConsonant = 0;

    for (char c : str) {
        // Convert character to lowercase for easier comparison
        c = tolower(c);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            countVowel++;
        } else if (isalpha(c)) { // Check if the character is a letter
            countConsonant++;
        }
        
    }

    cout << "Total vowels: " << countVowel << endl;
    cout << "Total consonants: " << countConsonant << endl;
}

//main start here ...
int main(){
  string str;
  cout<<"Enter the string :"<<endl;
  getline(cin,str);
  countVowelConsonant(str);
  return 0;
}