#include<iostream>
using namespace std;

class timed
{
  int hours;
  int minutes;
public: void gettime(int h, int m)
        {
          hours=h;
          minutes=m;
        }
        void display()
        {
          cout<<hours<<" hours and ";
          cout<<minutes<<" minutes "<<endl;
        }
        void sum(timed t1, timed t2)
        {
          minutes=t1.minutes+t2.minutes;
          hours=minutes/60;
          minutes=minutes%60;
          hours= hours+ t1.hours + t2.hours;
        }
};
int main()
{
  timed t1,t2,t3;
  t1.gettime(2,45);
  t2.gettime(3,30);
  t3.sum(t1,t2);
  t1.display();
  t2.display();
  t3.display();
  return 0;
}
