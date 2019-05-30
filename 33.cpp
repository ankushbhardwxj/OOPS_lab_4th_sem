//  WAP in C++ to display the roll no and name of a student to show single inheritance.

#include<iostream>
using namespace std;

class A{
    int roll;
    public:
    void getdata()
    {
        cout << "Enter roll no: ";
        cin >> roll;
    }
    void display()
    {
        cout << "Roll no: " << roll << endl;
    }
};

class B: public A{
    char n[20];
    public:
    void setdata()
    {
        getdata();
        cout << "Enter name: ";
        cin >> n;
    }
    void show()
    {
        display();
        cout << "Name : " << n << endl;
    }
};

int main()
{
    B obj;
    obj.setdata();
    obj.show();
    return 0;
}