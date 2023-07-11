/*
Properties of Destructor

The following are the main properties of Destructor:

    The destructor function is automatically invoked when the objects are destroyed.
    It cannot be declared static or const.
    The destructor does not have arguments.
    It has no return type not even void.
    An object of a class with a Destructor cannot become a member of the union.
    A destructor should be declared in the public section of the class.
    The programmer cannot access the address of the destructor.

When is the destructor called?

A destructor function is called automatically when the object goes out of scope:

    the function ends 
    the program ends 
    a block containing local variables ends 
    a delete operator is called  

*/

// C++ program to demonstrate the number of times
// constructor and destructors are called

#include <iostream>
using namespace std;
int cCount = 0;
int dCount = 0;
class Test {
public:
	// User-Defined Constructor
	Test()
	{

		// Number of times constructor is called
		cCount++;
		cout << "No. of Object created: " << cCount
			<< endl;
	}

	// User-Defined Destructor
	~Test()
	{
		dCount++;
		cout << "No. of Object destroyed: " << dCount
			<< endl;
		// Number of times destructor is called
	}
};

// driver code
int main()
{
	Test t, t1, t2, t3;
    // dynamically allocation of object 
    Test* t4 = new Test();
    delete t4;// for dynamically allocation u have to call destructor specifiically plz comment this whole line and run again so destructor will be called for 4 times only 
    


	return 0;
}
