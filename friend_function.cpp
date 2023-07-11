/*
Features of Friend Functions

     A friend function is a special function in C++ that in spite of not being a member
      function of a class has the privilege to access the private and protected data of 
      a class.
    
A friend function is a non-member function or ordinary function of a class, which is 
    declared as a friend using the keyword “friend” inside the class. By declaring a 
    function as a friend, all the access permissions are given to the function.
   
 The keyword “friend” is placed only in the function declaration of the friend function 
    and not in the function definition or call.
   
 A friend function is called like an ordinary function. It cannot be called using the
     object name and dot operator. However, it may accept the object as an
      argument whose value it wants to access.
   
 A friend function can be declared in any section of the class i.e. 
 public or private 
    or protected



    Advantages of Friend Functions

    A friend function is able to access members without the need of inheriting the class.
    The friend function acts as a bridge between two classes by accessing their private data.
    It can be used to increase the versatility of overloaded operators.
    It can be declared either in the public or private or protected part of the class.

Disadvantages of Friend Functions

    Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
    Friend functions cannot do any run-time polymorphism in their members.

Important Points About Friend Functions and Classes

    Friends should be used only for limited purposes. Too many functions or external classes are declared as friends of a class with protected or private data access lessens the value of encapsulation of separate classes in object-oriented programming.
    Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
    Friendship is not inherited.
    The concept of friends is not in Java.
    */

   // C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class base {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	base()
	{
		private_variable = 10;
		protected_variable = 99;
	}
	
	// friend function declaration
	friend void friendFunction(base& obj);
};


// friend function definition
void friendFunction(base& obj)
{
	cout << "Private Variable: " << obj.private_variable
		<< endl;
	cout << "Protected Variable: " << obj.protected_variable;
}

// driver code
int main()
{
	base object1;
	friendFunction(object1);

	return 0;
}





// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class GFG {
private:
	int private_variable;

protected:
	int protected_variable;

public:
	GFG()
	{
		private_variable = 10;
		protected_variable = 99;
	}

	// friend class declaration
	friend class F;
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
	void display(GFG& t)
	{
		cout << "The value of Private Variable = "
			<< t.private_variable << endl;
		cout << "The value of Protected Variable = "
			<< t.protected_variable;
	}
};

// Driver code
int main()
{
	GFG g;
	F fri;
	fri.display(g);
	return 0;
}
