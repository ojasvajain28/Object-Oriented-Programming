/*
Static Member Functions:

    Static member functions do not operate on any specific object. They are independent of object-specific data.
    They are declared using the static keyword within the class declaration.
    They can only access static data members and invoke other static member functions.
    Static member functions can be called using the class name followed by the scope resolution operator :: or through an object of the class

DON'T have THIS keyword
*/

#include <bits/stdc++.h>

using namespace std;

class MyClass
{
public:
    static int staticData;

    static void staticFunction()
    {
        cout << "Static Function" << endl;
    }
};

int MyClass::staticData = 10;

int main()
{
    MyClass::staticFunction(); // Output: Static Function

    MyClass obj;
    obj.staticFunction(); // Output: Static Function

    return 0;
}
