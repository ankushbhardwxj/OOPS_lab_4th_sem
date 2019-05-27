#include<iostream>
using namespace std;

class number{
  int a,b;
public: void getdata()
        {
          cin>>a>>b;
        }
        friend void mean(number x);
};

void mean(number x)
{
  int val=0;
  val=(x.a+x.b)/2;
  cout<<val;
}
int main()
{
  number n1;
  n1.getdata();
  mean(n1); //mean of a and b from object n1;
  return 0;
}
