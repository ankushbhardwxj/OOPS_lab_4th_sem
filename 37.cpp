// WAP in C++ to show hierarchical inheritance

#include<iostream>
using namespace std;

class A{
    protected:
    int x, y;
    public:
    void getdata()
    {
        cout << "Enter the values of x and y: ";
        cin >> x >> y;
    }
};

class B: public A{
    private:
    int u;
    public:
    void mul()
    {
        u = x*y;
        cout << "Product is: " << u << endl;
    }
};

class C: public A{
    private:
    int v;
    public:
    void add()
    {
        v = x+y;
        cout << "Sum is: " << v << endl;
    }
};

class D: public A{
    private:
    int w;
    public:
    void sub()
    {
        w = x-y;
        cout << "Subtraction is: " << w << endl;
    }
};

int main()
{
    B obj1;
    C obj2;
    D obj3;
    obj1.getdata();
    obj1.mul();
    obj2.getdata();
    obj2.add();
    obj3.getdata();
    obj3.sub();
    return 0;
}