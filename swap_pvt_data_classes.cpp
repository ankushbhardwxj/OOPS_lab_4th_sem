#include<iostream>
using namespace std;
class class1;
class class2{
  int num2;
public: void getdata(int x)
        {
          num2=x;
        }
        friend void exch(class1 &, class2 &);
        void display()
        {
          cout<<num2<<endl;
        }
};
class class1{
  int num1;
public: void getdata(int x)
        {
          num1=x;
        }
        friend void exch(class1 &, class2 &);
        void display()
        {
          cout<<num1<<endl;
        }
};
void exch(class1 & t1, class2 & t2)
{
  int temp;
  temp=t1.num1;
  t1.num1=t2.num2;
  t2.num2=temp;
}
int main()
{
  class1 t1;
  class2 t2;
  t1.getdata(10);
  t2.getdata(20);
  cout<<"before exchange: "<<endl;
  t1.display();
  t2.display();
  exch(t1,t2);
  cout<<"after exchange: "<<endl;
  t1.display();
  t2.display();
  return 0;
}
