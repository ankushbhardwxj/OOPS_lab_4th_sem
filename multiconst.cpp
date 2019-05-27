#include<iostream>
using namespace std;

class complex{
float real,imag;
public: complex()
        {
          //no arg is necessary to be given
        }
        complex(float a)  //for 1 arg
        {
          real=imag=a;
        }
        complex(float x, float y) //for 2 arg
        {
          real=x; imag=y;
        }
        friend void display(complex );
        friend complex sum(complex, complex);
};
complex sum(complex t1, complex t2)
{
  complex t3;
  t3.real=t1.real+t2.real;
  t3.imag=t1.imag+t2.imag;
  return (t3);  //return obj
}
void display(complex t)
{
  cout<<t.real<<"+j"<<t.imag<<endl;
}
int main()
{
  complex c1(2.7,3.5);  //note the style for call here
  complex c2(1.6);
  complex c3;
  c3=sum(c1,c2);
  display(c1);
  display(c2);
  cout<<"sum: "<<endl;
  display(c3);
  return 0;
}
