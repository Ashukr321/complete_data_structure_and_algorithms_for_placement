// preprocessor
#include <iostream>
#include <sstream>
using namespace std;


int countWord(string str)
{
  stringstream stream(str);
  string word = "";
  int count = 0;
  while (stream >> word)
  {
    count++;
  }
  return count;
}


// main start here ...
int main()
{
  string str;
  cout << "Enter the string : ";
  getline(cin, str);
  cout << "the number of words in the string is :" << countWord(str) << endl;

  return 0;
}


/*
#include <iostream>: This line includes the Input/Output stream library, which allows us to use cout for output and cin for input.
#include <sstream>: This line includes the string stream library, which provides functionality to operate on strings as if they were streams (like cin and cout). This is useful for parsing strings.
using namespace std;: This line allows us to use names from the std namespace without needing to prefix them with std::. For example, we can use cout instead of std::cout.


stringstream stream(str);: This line creates a stringstream object named stream initialized with the input string str. This allows us to treat the string as a stream, enabling us to extract words from it.

*/