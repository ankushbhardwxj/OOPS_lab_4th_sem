// WAP in C++ to resolve the diamond problem.

#include<iostream>
using namespace std;

class A{
    public:
    int a;
    A(){
        a=10;
    }
};

class B: public virtual A{
    public:
    int b;
    B(){
        b=11;
    }
};

class C: public virtual A{
    public:
    int c;
    C(){
        c=12;
    }
};

class D: public B, public C{
    public:
    int d;
    D(){
        d=13;
    }
};

int main()
{
    D obj;
    cout << "a: " << obj.a;
    cout << "b: " << obj.b;
    cout << "c: " << obj.c;
    cout << "d: " << obj.d;

    return 0;
}
