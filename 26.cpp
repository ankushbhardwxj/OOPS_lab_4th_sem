#include<iostream>
using namespace std;

class matrix{
  int arr1[10][10], arr2[10][10],row,colm;
public: void getdata()
        {
          cout<<"Enter row and colm: "<<endl;
          cin>>row>>colm;
          cout<<"Enter values in matrix: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cin>>arr1[i][j];
            }
          }
        }

        void swap()
        {
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              arr2[i][j]=arr1[j][i];
            }
          }
        }
        void display()
        {
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
          }
        }
};
int main()
{
  matrix m;
  m.getdata();
  m.swap();
  m.display();
  return 0;
}
