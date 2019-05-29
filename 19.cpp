// WAP in C++ to display the roll no. and marks of a student using copy constructor
// (shallow copy).

#include<iostream>
using namespace std;

class student{
    int roll, marks;
    public:
    student(int x, int y)
    {
        roll=x;
        marks=y;
    }
    student(student &s)
    {
        roll = s.roll;
        marks = s.marks;
    }
    void show()
    {
        cout << "Roll no: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    student s(50,100);
    s.show();
    student s1(s);
    s1.show();
    
    return 0;
}