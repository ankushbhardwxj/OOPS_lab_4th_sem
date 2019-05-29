// WAP in C++ to de-allocate the dynamically allocated memory of a variable using a
// destructor.

#include<iostream>
using namespace std;

class abc{
    int a, b, *ptr;
    public:
    abc(int x, int y, int z)
    {
        a = x;
        b = y;
        ptr = new int;
        *ptr = z;
    }
    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "ptr: " << *ptr << endl;
    }
    ~abc()
    {
        delete ptr;
        cout << "Destructor called";
    }
};

int main()
{
    abc d(5,6,7);
    d.display();
    return 0;
}