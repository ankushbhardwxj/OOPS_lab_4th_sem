#include<iostream>
using namespace std;

class findlargest{
private: int x, y;
public: void fetch()
        {
          cin>>x>>y;
        }
        void findlarge()
        {
          if(x>y)
          display(x);
          else
          display(y);
        }
        void display(int m)
        {
          cout<<y<<endl;
        }
};

int main()
{
  findlargest o;
  o.fetch();
  o.findlarge();
  return 0;
}
