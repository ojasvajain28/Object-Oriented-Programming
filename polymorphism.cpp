/*
The word “polymorphism” means having many forms. In simple words, we can define
 polymorphism as the ability of a message to be displayed in more than one form. 
 A real-life example of polymorphism is a person who at the same time can have different
characteristics. A man at the same time is a father, a husband, and an employee. So the
 same person exhibits different behavior in different situations. This is called polymorphism.
 Polymorphism is considered one of the important features of Object-Oriented Programming


                                           POLYMORPHISM
                                            /        \
                                           /          \        
                                    Compile-time    Run-time   
                                   /         \             \
                            function         operator       \
                             overloading     overloading     virtual 
                                                               function 


*/     


#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;
class A
{ public:
    void hello()
    {
        cout<<"i am ojasva"<<endl;
    }
    void hello(string name)                              // function overloading
    {
        cout<<"i am ojasva"<< name <<endl;
    }
// void hello(string Name)
//     {
//         cout<<"i am ojasva"<< Name <<endl;
//     }


};

int main()
{
    A a;
    a.hello();
    string ojasva = "ojasva";
    a.hello(ojasva);

return 0 ;
}
/*



Polymorphism is a fundamental concept in object-oriented programming (OOP) that allows objects of different classes to be treated as objects of a common base class. It enables the same code to be used with objects of different types, providing flexibility, extensibility, and code reuse. In C++, polymorphism is primarily achieved through two mechanisms: function overloading and virtual functions with dynamic binding.

1. **Function Overloading**:
   - Function overloading allows multiple functions with the same name but different 
   parameters to exist in a class.
   
   - The appropriate function to be called is determined at compile-time based on the 
   number, types, and order of the arguments provided during the function call.
   
   - Function overloading provides compile-time polymorphism, as different overloaded
    functions can be invoked based on the arguments used.
   
   - Example:
   ```cpp
   void print(int num) {
       cout << "Printing an integer: " << num << endl;
   }

   void print(string str) {
       cout << "Printing a string: " << str << endl;
   }
   
   int main() {
       print(42);             // Invokes print(int num)
       print("Hello world");  // Invokes print(string str)
       return 0;
   }
   ```

2. **Virtual Functions and Dynamic Binding**:
   - Virtual functions are functions declared in the base class that are intended to
    be overridden by derived classes.
   
   - They enable dynamic binding, which means that the appropriate function to be called 
   is determined at runtime based on the actual object type rather than the declared type.
   
   - Virtual functions allow a base class pointer or reference to invoke the appropriate
    derived class function implementation.
   
   - The `virtual` keyword is used to declare a function as virtual in the base class,
    and it can be overridden by derived classes using the `override` keyword.
   
   - Example:
   



   class Shape {
   public:
       virtual void draw() {
           cout << "Drawing a generic shape." << endl;
       }
   };

   class Circle : public Shape {
   public:
       void draw() override {
           cout << "Drawing a circle." << endl;
       }
   };

   class Square : public Shape {
   public:
       void draw() override {
           cout << "Drawing a square." << endl;
       }
   };
   
   int main() {
       Shape* shapePtr;
       Circle circle;
       Square square;

       shapePtr = &circle;
       shapePtr->draw();  // Invokes the overridden draw() in Circle

       shapePtr = &square;
       shapePtr->draw();  // Invokes the overridden draw() in Square

       return 0;
   }
   ```

Polymorphism allows code to be written in a generic and flexible manner, with the ability to
 handle objects of different types without explicitly knowing their specific types. 
 It simplifies code maintenance, promotes code reuse, and enables the creation of more 
 modular and extensible software systems.

 */