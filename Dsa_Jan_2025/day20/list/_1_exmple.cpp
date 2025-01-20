// Preprocessor
#include <iostream>
#include <list>
using namespace std;

// Main starts here ...
int main()
{
  // Create the list
  list<int> ls; // This is the empty list

  // Insert elements into the list
  ls.push_back(10);
  ls.push_back(20);
  ls.push_back(30);

  // Insert 200 at the beginning of the list
  auto it = ls.begin();
  ls.insert(it, 200);

  // Print the last element of the list
  cout << "Last element: " << ls.back() << endl;

  // Iterate using iterators
  cout << "Elements using iterators: ";
  for (auto it = ls.begin(); it != ls.end(); ++it)
  { // Corrected here
    int n = *it;
    cout << n << " ";
  }
  cout << endl;

  // Iterate using range-based for loop
  cout << "Elements using range-based for loop: ";
  for (int n : ls)
  { // Changed variable name for clarity
    cout << n << " ";
  }
  cout << endl;
  // Remove the first element

  int data = ls.front();
  ls.pop_front();
  
  cout << "Popped element: " << data << endl;
  return 0;
}