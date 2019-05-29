#include<iostream>
using namespace std;

class cuboid{
  int l,b,h;
public: void getdata()
        {
          cin>>l>>b>>h;

        }
        friend void perimeter(cuboid c);

};
void perimeter(cuboid c)
{
  int peri;
  peri=4*(c.l + (2*c.b) + c.h);
  cout<<peri;
}
int main()
{
  cuboid c;
  c.getdata();
    perimeter(c);
  return 0;
}
