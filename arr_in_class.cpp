#include<iostream>
using namespace std;

class market{
  int itemcode[100];
  int n; int itemcost[100]; int code; int sum;
public:
  void additem()
  {
    cout<<"Enter item code"<<endl;
    cin>>itemcode[n];
    cout<<"Enter item price"<<endl;
    cin>>itemcost[n];
    n++;
  }
  void removeitem()
  {
    cout<<"Enter item code to be removed: "<<endl;
    cin>>code;
    for(int i=0;i<n;i++)
    {
      if(itemcode[i]==code)
      {
        itemcode[i]=itemcode[i+1];
        n--;
      }
    }
  //displayitems();
  }
  void displayprice()
  {
    sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+itemcost[i];
    }
    cout<<"Total price "<<endl;
    cout<<sum;
  }
  void displayitems()
  {
    for(int i=0;i<n;i++)
    {
      cout<<"Item "<<i+1<<" "<<itemcode[i]<<endl;
    }
  }

};
int main()
{
  market m;
  int choice;
  do{
    cout<<"*****MAIN MENU*****"<<endl;
    cout<<"1. Add Item"<<endl;
    cout<<"2. Remove Item"<<endl;
    cout<<"3. Display total cost"<<endl;
    cout<<"4. Display total product list"<<endl;
    cout<<"0. Exit"<<endl;
    cin>>choice;

    switch (choice) {
      case 1: m.additem();
              break;
      case 2: m.removeitem();
              break;
      case 3: m.displayprice();
              break;
      case 4: m.displayitems();
              break;
    }

  }while (choice !=0);
  return 0;
}
