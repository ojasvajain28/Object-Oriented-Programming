/*
Sometimes you don’t want to allow derived class to override the base class’ virtual
 function. C++ 11
 allows built-in facility to prevent overriding of virtual function using final specifier

inal specifier in C++ 11 can also be used to prevent inheritance of class / struct.
 If a class or struct 
is marked as final then it becomes non inheritable and it cannot be used as base 
class/struct. 
*/

#include <iostream>
using namespace std;

class Base
{
public:
	virtual void myfun() final
	{
		cout << "myfun() in Base";
	}
};
class Derived : public Base
{
	void myfun()
	{
		cout << "myfun() in Derived\n";
	}
};




//***********************************************************************************************************

int main()
{
	Derived d;
	Base &b = d;
	b.myfun();
	return 0;
}


#include <iostream>
class Base final
{
};

class Derived : public Base
{
};

int main()
{
	Derived d;
	return 0;
}
