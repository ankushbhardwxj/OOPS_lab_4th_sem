#include<iostream>
using namespace std;
class XYZ;
class ABC{
  int x;
public: void getdata(int i)
        {
          x=i;
        }
        friend void exc(XYZ &, ABC &);
        void display()
        {
          cout<<x;
        }
};
class XYZ{
  int x;
public: void getdata(int i)
        {
          x=i;
        }
        friend void exc(XYZ &, ABC &);
        void display()
        {
          cout<<x;
        }
};
void exc(XYZ &z, ABC &a)
{
  int temp;
  temp=z.x;
  z.x=a.x;
  a.x=temp;

}
int main()
{
  XYZ t;
  ABC l;
  t.getdata(10);
  l.getdata(20);
  exc(t,l);
  t.display();
  l.display();
  return 0;
}
