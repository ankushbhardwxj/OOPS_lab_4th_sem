#include<iostream>
using namespace std;
int bookb, bookr, tbook, nb, nr;
class lib{

public: 
        void bookre()
        {
          tbook++;

        }
        void bookbo()
        {
          tbook--;

        }
};
int main()
{
  lib b[100];
  cout<<"Enter number of books in lib: "<<endl;
  cin>>tbook;
  cout<<"Enter number of books to borrow: "<<endl;
  cin>>nb;
  for(int i=0;i<nb;i++)
  b[i].bookbo();
  cout<<"Current number of books: "<<tbook;
  cout<<"Enter number of books to return: "<<endl;
  cin>>nr;
  for(int i=0;i<nr;i++)
  b[i].bookre();
  cout<<"Current number of books: "<<tbook;
  return 0;
}
