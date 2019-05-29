#include<iostream>
using namespace std;

class results{
  int  totmarks, marks1, marks2;
  float percent;
public: void getdata()
        {
          cin>>marks1>>marks2;
        }
        void totalmarks()
        {
          totmarks=marks1+marks2;
          cout<<totmarks<<endl;
        }
        void percentage()
        {
          percent = (totmarks*100)/200;
          cout<<percent<<"%";
        }
};

int main()
{
  results s;
  s.getdata();
  s.totalmarks();
  s.percentage();
  return 0;
}
