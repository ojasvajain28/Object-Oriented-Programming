/*
Static Data Members:

    Static data members are shared among all objects of a class. They have a single instance that is shared by all objects.
    They are declared using the static keyword within the class declaration, usually in the public or private section.
    They must be defined outside the class using the class name and scope resolution operator ::.
    Static data members are typically used to represent class-level properties or constants.
    You can access static data members using the class name followed by the scope resolution operator :: or through an object of the class.

*/

#include <iostream>
using namespace std;


class MyClass {
public:
    static int staticData;
};

int MyClass::staticData = 10;

int main() {
    cout<< MyClass::staticData << endl;  // Output: 10

    MyClass obj1;
    MyClass obj2;

    obj1.staticData = 20;
    cout << obj2.staticData << endl;  // Output: 20

    return 0;
}
