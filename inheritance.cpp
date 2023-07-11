/*

Access specifiers in C++ (public, private, and protected) define 
the visibility and accessibility of class members (variables and functions)
 within a class and its derived classes. Here's an explanation of each access specifier:

1. **Public**:
   - Members declared as public are accessible from anywhere in the program,
    including outside the class and its derived classes.
   - Public members form the interface of the class, allowing other classes and 
   functions to interact with the object and use its public functionalities.
   - Public data members can be directly accessed and modified by any part of the program.
   - Public member functions can be called by any part of the program, providing 
   access to the underlying implementation.

2. **Private**:
   - Members declared as private are accessible only from within the class itself. 
   They are not visible or accessible from outside the class or its derived classes.
   - Private members encapsulate the internal implementation details of a class and are not
    meant to be directly accessed or modified by external entities.
   - Private data members can only be accessed and modified through public member functions,
    providing controlled and validated access to the data.
   - Private member functions are utility functions or helper functions that are used internally 
   within the class to perform specific tasks.

3. **Protected**:
   - Members declared as protected are similar to private members, but with an additional
    accessibility to derived classes.
   - Protected members are accessible within the class itself, its derived classes, and friend 
   classes, but not from outside the class hierarchy.
   - Protected data members can be accessed and modified by member functions of the class and
    its derived classes, ensuring controlled access to the derived classes.
   - Protected member functions can be called by member functions of the class and its derived
    classes, allowing derived classes to reuse and extend the functionality of the base class.

Access specifiers play a crucial role in encapsulation, information hiding, and defining
 the boundaries of class interfaces. They provide control over the visibility and accessibility
  of class members, ensuring proper encapsulation of data and promoting data integrity.

By using access specifiers effectively, you can hide implementation details, expose only
 necessary functionalities, enforce data validation and consistency, and create well-defined
  class hierarchies with proper inheritance and code reuse.


*/
#include <iostream>

class Base {
public:
    int publicVarBase;

    void PublicMemberFunction() {
        std::cout << "Base::PublicMemberFunction()" << std::endl;
    }

protected:
    int protectedVarBase;

    void ProtectedMemberFunction() {
        std::cout << "Base::ProtectedMemberFunction()" << std::endl;
    }

private:
    int privateVarBase;

    void PrivateMemberFunction() {
        std::cout << "Base::PrivateMemberFunction()" << std::endl;
    }
};

class Derived_Public : public Base {
public:
    void AccessBaseMembers() {
        publicVarBase = 1;
        protectedVarBase = 2;
        // privateVarBase = 3;    // Inaccessible due to private access in Base

        PublicMemberFunction();
        ProtectedMemberFunction();

        // PrivateMemberFunction(); // Inaccessible due to private access in Base
    }
};

class Derived_Protected : protected Base {
public:
    void AccessBaseMembers() {
        publicVarBase = 4;
        protectedVarBase = 5;
        // privateVarBase = 6;    // Inaccessible due to private access in Base

        PublicMemberFunction();
        ProtectedMemberFunction();

        // PrivateMemberFunction(); // Inaccessible due to private access in Base
    }
};

class Derived_Private : private Base {
public:
    void AccessBaseMembers() {
        publicVarBase = 7;
        protectedVarBase = 8;
        // privateVarBase = 9;    // Inaccessible due to private access in Base

        PublicMemberFunction();
        ProtectedMemberFunction();
        // PrivateMemberFunction(); // Inaccessible due to private access in Base
    }
};

int main() {
    Derived_Public derivedPublic;
    derivedPublic.AccessBaseMembers();

    Derived_Protected derivedProtected;
    // derivedProtected.AccessBaseMembers();  // Inaccessible due to protected inheritance

    Derived_Private derivedPrivate;
    // derivedPrivate.AccessBaseMembers();    // Inaccessible due to private inheritance

    return 0;
}
