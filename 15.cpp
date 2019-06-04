// WAP to pass two parameters and display the addition and subtraction using ‘this’ pointer.

#include<iostream>

using namespace std;

class xyz
{
    int sum, diff;
    public:
    int getdata(int x, int y)
    {
        this->sum = x+y;
        this->diff = x-y;
    }
    void display()
    {
        cout << "Addition is: " << sum << endl;
        cout << "Subtraction is: " << diff << endl;
    }
};

int main()
{
    xyz obj;
    obj.getdata(10,4);
    obj.display();
    return 0;
}
