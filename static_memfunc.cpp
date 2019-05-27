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
        static void getcount()
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
  item::getcount();
  b.getdata(200);
  item::getcount();
  c.getdata(300);
  item::getcount();
  return 0;
}
