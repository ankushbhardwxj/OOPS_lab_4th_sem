#include<iostream>
using namespace std;
class XYZ;
class ABC{
  int n;
public: void getdata(int i)
        {
          n=i;
        }
        friend void max(XYZ,ABC);

};
class XYZ{
  int n;
  public: void getdata(int i)
        {
          n=i;
        }
        friend void max(XYZ,ABC);

};
void max(XYZ x, ABC a)
{
  if(x.n>a.n)
  cout<<x.n<<"is largest"<<endl;
  else
  cout<<a.n<<"is largest"<<endl;
}
int main()
{
  XYZ x;
  ABC a;
  x.getdata(10);
  a.getdata(20);
  max(x,a);
  return 0;
}
