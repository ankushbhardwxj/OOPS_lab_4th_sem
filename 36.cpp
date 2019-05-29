// WAP in C++ to show multiple inheritance.

#include<iostream>
using namespace std;

class A{
    protected:
    int l, b, a;
    public:
    void area()
    {
        cout << "Enter l and b: ";
        cin >> l >> b;
        a = l*b;
        cout << "Area: " << a;
    }
};

class B{
    protected:
    int c;
    public:
    void cost()
    {
        cout << "Enter the cost of painting the area: ";
        cin >> c;
    }
};

class C: public A, public B{
    int p;
    public:
    void paint()
    {
        p=c*a;
        cout << "Cost: " << p;
    }
};

int main()
{
    C obj;
    obj.area();
    obj.cost();
    obj.paint();
    
    return 0;
}