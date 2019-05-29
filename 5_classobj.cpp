#include<iostream>
using namespace std;

class marks{
  int mark, totmarks;
public: void getdata(int x)
        {
          mark=x;
        }
        friend marks added(marks t1, marks t2);

        void display(marks m)
        {
          cout<<"Total marks: "<<m.totmarks<<endl;
        }
};
marks added(marks t1, marks t2)
{
  marks t3;
  t3.totmarks=t1.mark+t2.mark;
  return(t3);
}
int main()
{
  marks m1,m2,m3;
  m1.getdata(10);
  m2.getdata(20);
  m3=added(m1,m2);
  m3.display(m3);
  return 0;
}
