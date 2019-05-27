#include<iostream>
using namespace std;

class item{
  static int n;
  int num;
public: void getdata(int a)
        {
          num=a;
          n++;
        }
        void getcount()
        {
          cout<<n<<endl;
        }
};
int item::n;
int main()
{
  item a , b , c;
  a.getcount();
  b.getcount();
  c.getcount();
  a.getdata(100);
  a.getcount();
  b.getdata(200);
  b.getcount();
  c.getdata(300);
    c.getcount();  
  return 0;
}
