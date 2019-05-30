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

        void findmax()
        {
          int max=0;i
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              if(arr1[j][i]>max)
              {
                max=arr1[j][i];
              }
            }
              cout<<"Max in "<<i+1<<" is "<<max<<endl;
          }
        }

};
int main()i
{
  matrix m;
  m.getdata();
  m.findmax();
  return 0;
}
