#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int Basic, Allowance, Total;
  Basic=323;
  Allowance=23;
  Total=346;

  cout<<setw(11)<<"BASIC"<<setw(11)<<Basic<<endl
      <<setw(11)<<"ALLOWANCE"<<setw(11)<<Allowance<<endl
      <<setw(11)<<"Total"<<setw(11)<<Total<<endl;
      
  return 0;
}
