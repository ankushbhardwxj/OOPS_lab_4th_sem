#include<iostream>
using namespace std;

class A{
    protected:
    char n[20];
    int roll;
    public:
    void getdata()
    {
        cout << "Enter the name: ";
        cin >> n;
        cout << "Enter the roll no: ";
        cin >> roll;
    }
};

class B: public A{
    protected:
    char name[20];
    public:
    void getname()
    {
        cout << "Enter class teacher's name: ";
        cin >> name;
    }
};

class C{
    protected:
    int no, s[10], total = 0;
    public:
    void subject()
    {
        cout << "Enter total no of subjects: ";
        cin >> no;
        for(int i=0; i<no; i++)
        {
            cout << "Enter marks for subject" << i+1;
            cin >> s[i];
        }
    }
    void calculate()
    {
        for(int i=0; i<no; i++)
        {
            total += s[i];
        }
    }
};

class D: public B, public C{
    private:
    int prec=0;
    public:
    void calc()
    {
        prec = (total/3)*100;
    }
    void display()
    {
        cout << "Name and roll is: " << n << " " << roll << endl;
        cout << "Teacher's name is: " << name << endl;
        cout << "Percentage is: " << prec << endl;
    }
};

int main()
{
    D obj;
    obj.getdata();
    obj.getname();
    obj.subject();
    obj.calculate();
    obj.calc();
    obj.display();
    
    return 0;
}