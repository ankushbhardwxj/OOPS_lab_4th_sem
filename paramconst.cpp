#include<iostream>
using namespace std;
class integer{
    int m,n;
  public: integer(int x , int y)
          {
            m=x;n=y;
          }
          void display()
          {
            cout<<"m="<<m<<endl;
            cout<<"n="<<n<<endl;
          }
};

int main()
{
  integer int1(0,100); //implicit call
  integer int2 = integer(25,75); //explicit call
  int1.display();
  int2.display();
  return 0;
}
