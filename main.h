#include <iostream>
using namespace std;
class search
{
public:
void searching()
 {
  cout<<"FOLLOWING ARE THE INTERNATIONAL FLIGHTS AVAILABLE"<<endl;

  for(int i=0;i<5;i++)
 
  {
  
  for(int j=0;j<10;j++)
  
  { 
  
   cout<<"FLIGHT FROM "<<localdestination[i]<<" TO "<<Internationaldestination[j]<<endl;
  }
  }
  }
};
class main1
 {
 private:
  char f;
  int menu_choice;
  char a;
 public:
void getdata()
{
m:
   cout<<"\n\n\n\n\n\n";
   cout<<setw(80)<<"*************************************"<<endl;
   cout<<setw(80)<<"*     AIRLINE RESERVATION SYSTEM    *"<<endl;
   cout<<setw(80)<<"*             MAIN MENU             *"<<endl;
   cout<<setw(80)<<"*        ENTER YOUR CHOICE          *"<<endl;
   cout<<setw(80)<<"*   PRESS 1 FOR LOCAL BOOKING       *"<<endl;
   cout<<setw(80)<<"* PRESS 2 FOR INTERNATIONAL BOOKING *"<<endl;
   cout<<setw(80)<<"*   PRESS 3 FOR SEARCH OF FLIGHTS   *"<<endl;
   cout<<setw(80)<<"*************************************"<<endl;
   cout<<"Enter Your Choice:";
   cin>>menu_choice;
  system("cls");
   passenger* p1;
   booking b1;
   international i1;
   local l1;
   char back;
   switch(menu_choice)
   {
   case 1:
    p1=&l1;
    p1->getdata();
    cout<<"To Go To Main Menu Press b"<<endl;
    cin>>back;
    system("CLS");
    if (back=='b')
    {
     goto m;
    }
    else
    {
     cout<<"\n\n\n\n\n\n";
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    }
    break;
   case 2:
    p1=&i1;
    p1->getdata();
    cout<<"To Go To Main Menu Press b";
    cin>>back;
    system("CLS");
    if (back=='b')
    {
     goto m;
    }
    else
    {
     cout<<"\n\n\n\n\n\n";
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    }
    break;
   case 3:
    search s1;
    s1.searching();
    cout<<"To Go To Main Menu Press b"<<endl;
    cin>>back;
    system("CLS");
    if (back=='b')
    {
     goto m;
    }
    else
    {
     cout<<"\n\n\n\n\n\n";
     cout<<setw(40)<<"BYE FROM AIR RESERVATION SYSTEM";
    }
    break;
}
} 
};