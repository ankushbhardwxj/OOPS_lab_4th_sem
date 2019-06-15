#include<iostream>
using namespace std;

template<class s>
class cal{
  s no1,no2;
public: cal(s n1, s n2)
        {
          no1=n1;
          no2=n2;
        }
        s add()
        {
          return (no1+no2);
        }
        s sub()
        {
          return (no1-no2);
        }
        s result()
        {
          cout<<"Addition: "<<add()<<endl;
          cout<<"Subtraction: "<<sub()<<endl;
        }
};

int main()
{
  cal<int> c(2,1);
  cal<float> f(2.4,3.2);
  c.result();
  f.result();
  return 0;
}
