// WAP to pass two parameters and display the addition and subtraction using ‘this’ pointer.

#include<iostream>

using namespace std;

class xyz
{
    int x, y;
    public:
    int getdata(int x, int y)
    {
        this->x = x+y;
        this->y = x-y;
    }
    void putdata()
    {
        cout << "Addition is: " << x << endl;
        cout << "Subtraction is: " << y << endl;
    }
};

int main()
{
    xyz obj;
    obj.getdata(10,4);
    obj.putdata();
    return 0;
}