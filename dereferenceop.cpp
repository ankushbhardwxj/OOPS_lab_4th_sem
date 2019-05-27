/* Very important program */
#include<iostream>
using namespace std;
class M{
  int x,y;
public: void set_xy(int a, int b)
        {
          x=a;
          y=b;
        }
        friend int sum(M m);
};
int sum(M m)
{
  int M ::* px = &M ::x; //pointer px for data member x
  int M ::* py = &M ::x;//pointer py for data member y
  M *pm = &m; //pointer pm for data obj m of this scope
  int S = m.*px+ pm->*py; //m.*px = px pointer of obj m
                        //pm->*py = pointer to obj m
                        //dereferencing to pointer to y
  return S;
}
int main()
{
  M n;
  void (M::*pf)(int , int ) = &M :: set_xy; //pointer pf for function set_xy
  (n.*pf)(10,20); //(obj-name .* pointer to member function)(values)
  cout<<"Sum: "<<sum(n)<<endl;//sum of above passed values found
  M *op = &n; //pointer op for obj n created
  (op->*pf)(30,40);//(pointer-to-object->*pointer-to-member)(values)
  cout<<"Sum= "<<sum(n)<<endl;
  return 0;
}
