#include<iostream>
using namespace std;

class complex{
  int real, imag;
public:
  void getdata(int x, int y)
  {
      real=x;
      imag=y;
  }
  void display()
  {
    cout<<real<<"+i"<<imag<<endl;
  }
  complex operator-(complex c) //return type of function must be
  {                             //complex type
    complex t;
    t.real=real+c.real;
    t.imag=imag+c.imag;
    return(t);
  }
};

int main()
{
  complex c1,c2,c3;
  c1.getdata(2,3);
  c2.getdata(4,5);
  c3 = c1-c2;
  c3.display();
}
