#include<iostream>
using namespace std;

class matrix{
  int arr1[10][10], row, colm, searchno;
public: void getdata()
        {
          cout<<"Enter row and colm: "<<endl;
          cin>>row>>colm;
          cout<<"First matrix: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cin>>arr1[i][j];
            }
          }
        }
        void display()
        {

        }
        void search()
        {
          int flag =0;
          cout<<"Enter value to be searched: "<<endl;
          cin>>searchno;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              if(arr1[i][j]==searchno)
              flag=1;
            }
          }
            if(flag==1)
            cout<<"Element found"<<endl;
            else
            cout<<"Element not found"<<endl;

        }
};
int main()
{
  matrix m;
  m.getdata();
  m.search();
  m.display();
  return 0;
}
