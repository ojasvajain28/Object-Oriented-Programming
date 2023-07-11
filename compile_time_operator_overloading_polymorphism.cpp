/*
B. Operator Overloading

C++ has the ability to provide the operators with a special meaning for a data type,
 this ability is known as operator overloading. For example, we can make use of the addition
  operator (+) for string class to concatenate two strings. We know that the task of this
   operator is to add two operands. So a single operator ‘+’, when placed between integer
    operands, adds them and when placed between string operands, concatenates them
*/

// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;

public:
	Complex(int r = 0, int i = 0)
	{
		real = r;
		imag = i;
	}

	// This is automatically called
	// when '+' is used with between
	// two Complex objects
	Complex operator+(Complex const& obj)
	{
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }




};


class sum
{
    public:
      int a;
sum operator+(sum second)
{
    sum temp;
    temp.a = this->a - second.a;
    return temp;
}      
void operator()(sum bracket)
{
    cout<<"me bracket hu";
}
};

// Driver code
int main()
{
	Complex c1(10, 5), c2(2, 4);

	// An example call to "operator+"
	Complex c3 = c1 + c2;
	c3.print();
 
    sum s1,s2,s3;
    s1.a = 10;
    s2.a = 20;
    s3 = s1 + s2;
    cout<<s3.a<<endl;

    s3(s1);

}
