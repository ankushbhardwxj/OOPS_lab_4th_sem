// WAP in C++ to copy the dynamically allocated memory of a variable using copy
// constructor (deep copy).

#include<iostream>
using namespace std;

class deep{
    int a, b;
    int *ptr;
    public:
    deep(int x, int y, int z)
    {
        a = x;
        b = y;
        ptr = new int;
        *ptr = z;
    }
    deep(deep &d)
    {
        a = d.a;
        b = d.b;
        ptr = new int;
        *ptr = *(d.ptr);
    }
    void show()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "ptr: " << *ptr << endl;
    }
};

int main()
{
    deep obj1(10,2,5);
    obj1.show();

    deep obj2(obj1);
    obj2.show();
}