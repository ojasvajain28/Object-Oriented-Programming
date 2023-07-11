/* A constructor is a special type of member function that is called 
automatically when an object is created.

In C++, a constructor has the same name as that of the 
class and it does not have a return type. For example,
*/

// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}