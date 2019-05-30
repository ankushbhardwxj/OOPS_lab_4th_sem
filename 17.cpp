#include<iostream>
#include<cmath>
using namespace std;

class fd{
  int dep_no;
  float maturityam;
  string name;
public: fd(int amount, float interest, int duration)
        {
          float r_interest;
          cout<<"Enter name: "<<endl;
          cin>>name;
          cout<<"Enter account no: "<<endl;
          cin>>dep_no;
          r_interest=(interest * duration);
          maturityam=amount*(pow(r_interest,duration));
        }
        void display()
        {
          cout<<"Name: "<<name<<endl;
          cout<<"Account no: "<<dep_no<<endl;
          cout<<"Amount on maturity: "<<maturityam<<endl;

        }
};
int main()
{
  fd f(1000,0.2,6); //amount, interest rate, duration
  f.display();
  return 0;
}
