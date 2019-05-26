#include<iostream>
using namespace std;
void add(int x, int y);
void sub(int x, int y);
void dv(int x, int y);
void mpy(int x, int y);
int main()
{
  int x,y;
  cin>>x>>y;
  char ch;
  cin>>ch;

  switch(ch)
  {
    case '+': add(x,y); break;
    case '-': sub(x,y); break;
    case '*': mpy(x,y); break;
    case '/': dv(x,y); break;
    default: cout<<"Invalid"<<endl;
  }
  return 0;
}

void add(int x, int y)
{
  int r;
  r=x+y;
  cout<<r;
}
void sub(int x, int y)
{
  int r;
  r=x-y;
  cout<<r;
}
void mpy(int x, int y)
{
  int r;
  r=x*y;
  cout<<r;
}
void dv(int x, int y)
{
  int r;
  r=x/y;
  cout<<r;
}
