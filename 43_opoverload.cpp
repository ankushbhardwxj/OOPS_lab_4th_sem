#include<iostream>
using namespace std;

class space{
  int x,y,z;
public: void getdata(int a, int b, int c)
        {
          x=a; y=b; z=c;
        }
        void display()
        {
          cout<<x<<"\t"<<y<<"\t"<<z<<endl;
        }
        void operator-() //overloading done here
        {
          x=-x;
          y=-y;
          z=-z;
        }
};

int main()
{
  space S;
  S.getdata(10,-20,30);
  cout<<"S : "<<endl;
  S.display();
  -S; //object invokes operator
  cout<<"-S : "<<endl;
  S.display();
  return 0;
}
