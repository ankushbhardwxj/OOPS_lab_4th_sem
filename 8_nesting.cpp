#include<iostream>
using namespace std;

class num{
  int numb;
public: void getdata(int i)
        {
          numb=i;
        }
        void largest(num n1, num n2)
        {
          if(n1.numb>n2.numb)
          {
            display(n1);
          }
          else
          display(n2);
        }
        void display(num x)
        {
          cout<<x.numb<<"is largest"<<endl;
        }

};
int main()
{
  num n1,n2;
  n1.getdata(10);
  n2.getdata(20);
  num n;
  n.largest(n1,n2);

  return 0;
}
