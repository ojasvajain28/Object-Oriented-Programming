#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
using namespace std;

class ojasva

{

    int no;

public:

ojasva()
{
    cout<<"hello world";
}
    int age;
    string name;
    string sname;

    int getno()
    {
        return no;
    }

    void setno(int n)
    {
        no = n;
    }
};

int main()
{
//static allocation
    ojasva j;

    j.age = 10;
    cout << j.age << endl;

    j.setno(70);
    cout << j.getno()<< endl;

// dynamic allocation

ojasva *a= new ojasva ;

a->age = 50;
    cout << a->age << endl;
    return 0;
}