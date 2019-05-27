#include<iostream>
using namespace std;

class complex{
  float real, imag;
public: void getdata(float x, float y)
        {
          real=x;
          imag=y;
        }
        friend complex sum(complex, complex);
        void display(complex t)
        {
          cout<<t.real<<" +j"<<t.imag<<endl;
        }
};
complex sum(complex c1, complex c2)
{
  complex c3;
  c3.real=c1.real+c2.real;
  c3.imag=c1.imag+c2.imag;
  return (c3);
}
int main()
{
  complex t1,t2,t3;
  t1.getdata(3.1,5.65);
  t2.getdata(2.75,1.2);
  t3=sum(t1,t2);
  t3.display(t3);
  return 0;
}
