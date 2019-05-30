// WAP in C++ to define a class that displays the total bill of items and the details. The
// customer purchases ‘ n ‘ items. Derive a class from the base class that calculates a
// discount on the bill provided to the customer.

#include<iostream>
using namespace std;

class A{
    char n[30];
    int a[50], b_no, no, total = 0;
    int i;
    public:
    void input()
    {
        cout << "Name of customer: ";
        cin >> n;
        cout << "Enter the bill no: ";
        cin >> b_no;
        cout << "Enter no. of items bought: ";
        cin >> n;
        for(i=0; i<no; i++)
        {
            cout << "Enter cost of item: " << i+1;
            cin >> a[i];
        }
        for(i=0; i<no; i++)
        {
            total += a[i];
        }
    }
    void display()
    {
        cout << "Name: " << n << endl;
        cout << "Bill no: " << b_no << endl;
        cout << "Items bought: " << no << endl;
        cout << "Total: " << total << endl;

    }
};