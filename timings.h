#include <iostream>
using namespace std;
 char localdestination[5][20]={"ISLAMABAD","KARACHI","LAHORE","PESHAWAR","QUETTA"};
   char Internationaldestination[10][20]={"NEW YORK","BEIJING","CAPE TOWN","TOKYO","PARIS","LOS ANGELES","LONDON","BERLIN","DUBAI","MUMBAI" };
class timings
{
protected:
 int choose;
public:
 void getdata()
 {
  cout<<"ON WHICH TIME YOU WANT TO TRAVEL"<<endl;
  cout<<"PRESS 1 FOR 6 AM"<<endl;
  cout<<"PRESS 2 FOR 12 PM"<<endl;
  cout<<"PRESS 3 FOR 9 PM"<<endl;
  cin>>choose;
 }
 void show()
 {
  if(choose==1)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight timing 6 AM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("D:\\D_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight timing 6 AM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==2)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight timing 12 PM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("D:\\D_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight timing 12 PM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
  if(choose==3)
  {
    cout<<"|                                                                         "<<endl;
    cout<<"|flight timing 9 PM                                                        "<<endl;
    cout<<"|_________________________________________________________________________"<<endl;
    cout<<"                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
    ofstream outfile;
    outfile.open("D:\\D_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|flight mtiming 9 PM                                                        "<<endl<<
                         "|_________________________________________________________________________"<<endl<<
       "                  GOOD BYE AND HAVE A SAFE JOURNEY                        "<<endl;
  }
 }
};