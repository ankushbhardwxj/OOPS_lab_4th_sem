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

        void rotate()
        {
          cout<<"Before swap: "<<endl;
          for(int i=0;i<row;i++)
          {
            for(int j=0;j<colm;j++)
            {
              cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
          }
          cout<<"After swap: "<<endl;
          for(int j=colm-1;j>=0;j--)
          {
	           for(int i=0;i<row;i++)
	            {
		              cout<<arr1[i][j]<<" ";
	            }
              cout<<endl;
          }
        }

};
int main()
{
  matrix m;
  m.getdata();
  m.rotate();
  // /m.display();
  return 0;
}
