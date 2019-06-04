#include<iostream>
using namespace std;

class emp{
  string name;
  int empid;
public: void getdata()
        {
          cin>>name;
          cin>>empid;
        }
        void display()
        {
          cout<<name;
          cout<<empid;
        }
};
int main()
{
  emp e[100];
  for(int i=0;i<3;i++)
  {
    e[i].getdata();
  }
  for(int i=0;i<3;i++)
  {
    e[i].display();
  }
  return 0;
}
