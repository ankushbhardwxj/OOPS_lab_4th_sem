#include<iostream>
using namespace std;
class sub{
  int sub_marks[100];
  int tsum=0;
public: void getdata()
        {
          cout<<"Enter subject marks: "<<endl;
          for(int i=0;i<7;i++)
          cin>>sub_marks[i];
        }
        void sum()
        {
          for(int i=0;i<7;i++)
          tsum=tsum+sub_marks[i];
        }
        void display()
        {
          cout<<tsum;
        }
};
int main()
{
sub o;
o.getdata();
o.sum();
o.display();
  return 0;
}
