#include<iostream>
using namespace std;
//find problem - HIT THE EXCEPTION
//inform that error occured - THROW THE EXCEPTION
//receive the error info - CATCH THE EXCEPTION
//take corrective actions - HANDLE THE EXCEPTION
//TRY-THROW-CATCH
int main()
{
    int a,b;
    float d;
    cin>>a>>b;
    try
    {
      if(b!=0)
      {
        d=a/b;
        cout<<d<<endl;
      }
      else
      {
        throw(b);
      }
    }
    catch(int i)
    {
      cout<<"Infinite answer since b is "<<i;
    }
  return 0;
}
