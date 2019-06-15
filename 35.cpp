// WAP in C++ to show multilevel inheritance

#include<iostream>
using namespace std;

class data{
    protected:
    float s1, s2, s3;
    public:
    void getdata()
    {
        cout << "Enter marks of social: ";
        cin >> s1;
        cout << "Enter marks of maths: ";
        cin >> s2;
        cout << "Enter marks of science: ";
        cin >> s3;
    }
};

class total: public data{
    protected:
    float t = 0;
    public:
    void subject(){
        t = s1 + s2 + s3;
        cout << "Total is: " << t << endl;
    }
};

class final: public total{
protected:
    float prec;
    public:
    void calculate()
    {
        prec = (t/300) * 100.0;
    }
    void show()
    {
        cout << "Percentage is: " << prec <<"%"<< endl;
    }
};

int main(){
    final obj;
    obj.getdata();
    obj.subject();
    obj.calculate();
    obj.show();
    return 0;
}
