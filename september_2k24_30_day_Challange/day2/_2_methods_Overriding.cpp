// preprocessor
#include <iostream>
using namespace std;

class Animal
{
public:
  virtual void sound()
  {
    cout << "The animal makes a sound." << endl;
  }
};

class Dog : public Animal
{
public:
  void sound()
  {
    cout << "The dog barks." << endl;
  }
};

// main start here ...
int main()
{
  Dog *d1 = new Dog(); // object is created at  runtime in heap memory

  d1->sound();

  return 0;
}