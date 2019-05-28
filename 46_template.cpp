#include<iostream>
using namespace std;
//templates are used when a same function must be applied to
//various types of data type
template<class swap> //note that name of class and function should not be same
void swapp(swap &i, swap &j) //declare a class in a template and use it
{                           //as any other datatype
  swap temp;
  temp=i;
  i=j;
  j=temp;
}
int main()
{
  int i,j;
  char a,b;
  float c,d;
  cin>>i>>j;
  swapp(i,j);
  cout<<"after swap "<<i<<" "<<j;
  cin>>a>>b;
  swapp(a,b);
  cout<<"after swap "<<a<<" "<<b;
  cin>>c>>d;
  swapp(c,d);
  cout<<"after swap "<<c<<" "<<d;
  return 0;
}
