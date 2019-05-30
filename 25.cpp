#include<iostream>
using namespace std;

class matrix{
  int arr1[10][10],arr2[10][10], row, colm;
  
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

        void intersect()
        {
          char ch='*';
          cout<<"Intersecting matrices: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              if(arr1[i][j]!=arr2[i][j])
              {
                cout<<"*"<<" ";
              }
              else
              cout<<arr2[i][j]<<" ";

            }
          }
        }

};
int main()
{
  matrix m;
  m.getdata();
  m.intersect();
    return 0;
}
