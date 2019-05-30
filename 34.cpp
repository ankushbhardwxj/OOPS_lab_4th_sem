#include<iostream>
using namespace std;
class bill{

public:
  int cost[100];
  int item_code[100];
  int n;
  void getdata()
        {
            cin>>n;
            for(int i=0;i<n;i++)
            {
              cin>>item_code[i]>>cost[i];
            }
        }
        void show()
        {
          for(int i=0;i<n;i++)
          {
            cout<<item_code[i]<<" "<<cost[i]<<endl;
          }
        }
};
class discount:public bill{
  int totalamt=0,totalamt2;
  float discnt,discntamt;
public: void total()
        {
          getdata();
          for(int i=0;i<n;i++)
          {
            totalamt=totalamt+cost[i];
          }
          show();
          cout<<totalamt<<endl;
          cout<<"Enter discount %"<<endl;
          cin>>discnt;
           discntamt=totalamt*(discnt/100);
           cout<<"discount amt"<<discntamt<<endl;
          totalamt2= totalamt - discntamt;
          cout<<totalamt2<<endl;
        }
};
int main()
{
  discount d;
  d.total();

  return 0;
}
