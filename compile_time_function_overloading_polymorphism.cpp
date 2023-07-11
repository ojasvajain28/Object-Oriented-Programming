/*


1. Compile-Time Polymorphism

This type of polymorphism is achieved by function overloading or operator overloading.


A. Function Overloading

When there are multiple functions with the same name but different parameters, 
then the functions are said to be overloaded, hence this is known as Function Overloading. 
Functions can be overloaded by changing the number of arguments or/and changing the type of
arguments. In simple terms, it is a feature of object-oriented programming providing many
functions that have the same name but distinct parameters when numerous tasks are listed 
under one function name.
There are certain Rules of Function Overloading that should be followed while overloading 
a function.









*/


// C++ program to demonstrate
// function overloading or
// Compile-time Polymorphism
#include <bits/stdc++.h>

using namespace std;
class Geeks {
public:
	// Function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name but
	// 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name and
	// 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

// Driver code
int main()
{
	Geeks obj1;

	// Function being called depends
	// on the parameters passed
	// func() is called with int value
	obj1.func(7);

	// func() is called with double value
	obj1.func(9.132);

	// func() is called with 2 int values
	obj1.func(85, 64);
	return 0;
}
