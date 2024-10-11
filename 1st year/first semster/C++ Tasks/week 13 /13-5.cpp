/* CH-230-A
 (problem2-1.c)
Fatima Fares
 ffares@jacobs-university.de
*/
#include<iostream>
using namespace std;

class A
{
    protected: int x;

    public:
    A(int i) { x = i; }
    void print() { cout << x << endl; }
};

class B: virtual public A
{
public:
    B():A(10) { }
};

class C: virtual public A 
{
public:
    C():A(20) { }
};

class D: public B, public C {
    public:
    D():A(10), B(), C() { }
    void print() { cout << "D(" << B::x << ", " << C::x << ")" << endl; }
};

int main()
{
    D d;
    d.print();
    return 0;
}