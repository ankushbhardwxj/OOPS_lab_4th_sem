// WAP in C++ using overloading of constructors to find the cost of painting the area of
// a house @ of Rs.50 per square feet.

#include<iostream>
using namespace std;

class paint{
    int l, b;
    public:
    paint(){
        cout << "Enter the length and breadth: ";
        cin >> l >> b;
    }
    paint(int len, int br)
    {
        l=len;
        b=br;
    }
    void sum()
    {
        int a, b, cost;
        a = l*b;
        cost = 50*a;
        cout << "The cost @Rs 50 per square feet area " << cost;
    }
};

int main()
{
    paint obj1;
    obj1.sum();
    paint obj2(10,20);
    obj2.sum();
    return 0;
}