// WAP to find the maximum of a set of numbers. The numbers are taken from user. The
// program will print a pointer that points to the maximum value.

#include<iostream>
using namespace std;

int a[50], i;

class maxNo{
    int n;
    public:
    void getdata()
    {
        cout << "Enter the number of elements: ";
        cin >> n;
        cout << "Enter the number:" << endl;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
    }
    void  find()
    {
        int *ptr;
        ptr = &a[0];
        for(i=0; i<n; i++)
        {
            if(a[i]>*ptr)
                ptr = &a[i];
        }
        cout << "The max number is: " << *ptr << endl;
    }
};

int main()
{
    maxNo obj;
    obj.getdata();
    obj.find();
    return 0;
}