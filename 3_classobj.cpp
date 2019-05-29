#include<iostream>
using namespace std;

class weight{
  int kgs, grams;
public: void getdata(int x, int y)
        {
          kgs=x;  grams=y;
        }
        void addwt(weight &t1, weight &t2)
        {
          grams=t1.grams+t2.grams;
          kgs=grams/1000;//check logic here
          grams=grams%1000;
          kgs=t1.kgs+t2.kgs;
        }
        void display()
        {
          cout<<kgs<<" kgs and "<<grams<<" grams"<<endl;
        }

};
int main()
{
  weight w1,w2,w3;
  w1.getdata(2,343);
  w2.getdata(4,282);
  w3.addwt(w1,w2);
  w3.display();
  return 0;
}
