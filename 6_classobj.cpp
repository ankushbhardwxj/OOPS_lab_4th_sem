#include<iostream>
using namespace std;
class complex{
  int real, imag;
public: void getdata(int x, int y)
        {
          real=x;
          imag=y;
        }
        friend complex added(complex &x,complex &y);
        void display(complex c)
        {
          cout<<c.real<<"+i"<<c.imag<<endl;
        }
};

complex added(complex &x, complex &y)
{
  complex z;
  z.real=x.real+y.real;
  z.imag=x.imag+y.imag;
  return (z);
}
int main()
{
  complex c1,c2,c3;
  c1.getdata(4,5);
  c2.getdata(3,9);
  c3=added(c1,c2);
  c3.display(c3);
  return 0;
}
