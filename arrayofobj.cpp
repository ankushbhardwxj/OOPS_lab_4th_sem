#include<iostream>
using namespace std;

class emp{
  char name[30];
  int age;
public: void getdata()
        {
          cin>>name>>age;
        }
        void display()
        {
          cout<<"Name "<<name<<endl;
          cout<<"Age "<<age<<endl;
        }
};
int main()
{
  emp manager[3];
  cout<<"Enter name and age:"<<endl;
  for(int i=0;i<3;i++)
  {

    manager[i].getdata();
  }
  cout<<"Display details:"<<endl;
  for(int i=0;i<3;i++)
  {
    manager[i].display();
  }
  return 0;
}
