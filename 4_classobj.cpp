#include<iostream>
using namespace std;

class marks{
  int mark,totmark;
public: void getdata(int x)
        {
          mark=x;
        }
        void addmarks(marks &x, marks &y)
        {
          totmark=x.mark+y.mark;
        }
        void display()
        {
          cout<<"total marks: "<<totmark<<endl;
        }
};
int main()
{
  marks m1,m2,totmarks;
  m1.getdata(10);
  m2.getdata(20);
  totmarks.addmarks(m1,m2);
  totmarks.display();

  return 0;
}
