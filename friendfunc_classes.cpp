#include<iostream>
using namespace std;
class class1;
class class2{
  int x;
public: void getdata(int i)
        {
          x=i;
        }
        friend void max(class1 , class2 );
};
class class1{
  int x;
  public: void getdata(int i)
          {
            x=i;
          }
          friend void max(class1 , class2 );

};
void max(class1 t1, class2 t2)
{
  if(t1.x>t2.x)
  cout<<t1.x<<" is max"<<endl;
  else
  cout<<t2.x<<" is max"<<endl;
}
int main()
{
  class1 t1;
  class2 t2;
  t1.getdata(10);
  t2.getdata(20);
  max(t1,t2);
  return 0;
}
