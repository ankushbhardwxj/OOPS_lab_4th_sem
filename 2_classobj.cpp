#include<iostream>
using namespace std;
class timed{
  int hours, minutes;
public: void getdata(int x, int y)
        {
          hours=x; minutes=y;
        }
        void addtime(timed t1, timed t2)
        {

          minutes=t1.minutes+t2.minutes;
          minutes=hours/60;
          minutes=minutes%60;
          hours=t1.hours+t2.hours;

        }
        void display()
        {
          cout<<hours<<"hours and"<<minutes<<"minutes"<<endl;
        }
};

int main()
{
  timed x1,x2,x3;
  x1.getdata(2,15);
  x2.getdata(3,24);
  x3.addtime(x1,x2);
  x3.display();
  return 0;
}
