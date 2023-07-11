/*
Encapsulation is one of the fundamental concepts in object-oriented programming (OOP), and it refers to the bundling of data and methods/functions that operate on that data into a single unit called a class. In C++, encapsulation is achieved through the use of access specifiers (public, private, and protected) and member functions (methods).

Here's how encapsulation works in C++:

    Data Hiding: The private access specifier is used to hide the internal data members and implementation details of a class from the outside world. Private members can only be accessed by other member functions of the same class. This prevents direct access and manipulation of the data, ensuring data integrity and encapsulation.

    Public Interface: The public access specifier is used to declare the interface of the class. Public members are accessible from outside the class and can be used to interact with the object of that class. These members define the operations that can be performed on the object.

    Member Functions: Member functions (also known as methods) 
    are functions defined within the class. They have access to both the public
     and private members of the class. Member functions provide an interface for
      interacting with the internal data and perform operations on it. By encapsulating
       the data and methods together, you can control the access
     and manipulation of the data.

The encapsulation principle allows you to achieve data 
abstraction and separate the implementation details from the public interface. It also provides better control over the access and modification of the data, enhancing the security and maintainability of the code. Encapsulation helps in creating modular, reusable, and well-organized code by enforcing encapsulation boundaries between different components of a program

*/

#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
private:
    int x;
    int y;
    int z;

public:
    void setX(int a)
    {
        x = a;
    }
    void setY(int b)
    {
        y = b;
    }
    void setZ(int c)
    {
        z = c;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    int getZ()
    {
        return z;
    }
};

int main()
{
    Encapsulation obj;
    obj.setX(10);
    obj.setY(20);
    obj.setZ(30);
    cout << obj.getX() << endl;
    cout << obj.getY() << endl;
    cout << obj.getZ() << endl;

    return 0;
}