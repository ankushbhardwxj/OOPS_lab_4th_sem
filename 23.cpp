#include<iostream>
using namespace std;

class matrix{
  int arr1[10][10],arr2[10][10], arr3[10][10], row, colm;
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
          cout<<"Second matrix: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cin>>arr2[i][j];
            }
          }
        }

        void add()
        {
          cout<<"Adding matrices: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
          }
        }
        void display()
        {
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cout<<arr3[i][j]<<'\t';
            }
            cout<<endl;
          }
        }
};
int main()
{
  matrix m;
  m.getdata();
  m.add();
  m.display();
  return 0;
}
