/*
The compiler supplies an implicit pointer along with the names of the functions as ‘this’.
The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and
is available as a local variable within the body of all nonstatic functions. ‘this’ pointer is
not available in static member functions as static member functions can be called without any object
(with class name).

*/

#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;

        cout<<this->x<<endl<<this->y<<endl;
    }
    Test &setX(int a)
    {
        x = a;
        cout<<this->x<<endl;
        return *this;
    }
    Test &setY(int b)
    {
        y = b;
        cout<<this->y<<endl;
        return *this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
    Test obj1(15, 5);

    // Chained function calls. All calls modify the same object
    // as the same object is returned by reference
    obj1.setX(10).setY(20);

    obj1.print();
    return 0;
}
