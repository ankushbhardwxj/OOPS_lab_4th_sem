#include<iostream>
using namespace std;

class space{
  int num;
public: void getdata()
        {
            cin>>num;
        }
        void display()
        {
          cout<<num;
        }
        void operator--() //overloading done here
        {
          num--;
        }
        void operator++()
        {
          num++;
        }
};

int main()
{
  space S;
  S.getdata();
  ++S;
  cout<<"Incremented by 1 "<<endl;
  S.display();
  --S;
  cout<<"Decremented by 1 "<<endl;
  S.display();

  return 0;
}
