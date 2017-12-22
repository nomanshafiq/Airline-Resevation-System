
#include <iostream>
using namespace std;
class passenger
{
public:
    virtual void getdata()
 {
 }
virtual void show()=0;
};
class booking:public passenger
{
protected:
 int num;
 char ch;
 char firstname[60];
 char lastname[60];
 char address[60];
 int phonenumber;
 char currentlocation[30];
 char destination[30];
 char reservation_no[60];
 int option;
public:
 void getdata()
 {
  cout<<setw(40)<<"\n\n        ::Please enter the required information for passenger number::"<<endl;  
  cout<<"\n\n\nEnter the firstname of passenger: ";
   cin.getline(firstname,60);
   cout<<endl;
   cout<<"Enter the lastname of passenger: ";
   cin.getline(lastname,60);
   cout<<endl;
   cout<<"Enter address of passenger:  ";
   cin.getline(address,60);
   cout<<endl;
   cout<<"Enter the phone number:  ";
   cin>>phonenumber;
   cout<<endl;
   cout<<"Enter the Resevation No. of Ticket: ";
   cin.getline(reservation_no,60);
   cout<<endl;
   cout<<"Enter the current location of passenger(IN CAPITAL LETTERS ONLY): ";
   cin.getline(currentlocation,60);
   cout<<endl;
   cout<<"Enter the destination of passenger(IN CAPITAL LETTERS ONLY): ";
   cin.getline(destination,60);
   cout<<endl;
   system("CLS");
 }
 void show()
 {
   cout<<setw(40)<<"Your E-Ticket is :"<<endl; 
   int t=1;
   int r=12345;
  cout<<"                           AIRLINE TICKET                                 "<<endl;
  cout<<"|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Resevation No. :"<<reservation_no<<"                                     "<<endl;
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Full Name :"<<firstname<<" "<<lastname<<"                                     "<<endl;
  cout<<"|Address :"<<address<<"                                                   "<<endl;
  cout<<"|Phone Number :"<<phonenumber<<"                                                   "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Depart :"<<currentlocation<<"                                                      "<<endl;
  cout<<"|Arrive :"<<destination<<"                                                       "<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilograms                                               "<<endl;
  cout<<"|*contact Airline for any find of help(phone#22233337)                    "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
    
  ofstream outfile("D:\\D_ticket.txt");
    outfile<<"                           AIRLINE TICKET                                 "<<endl<<
   "|Ticket No."<<t<<"                                Reference No."<<r<<"\t  "<<endl<<
      "|_________________________________________________________________________"<<endl<<
   "|Resevation No. :"<<reservation_no<<"                                     "<<endl<<
   "|__________________________________________________________________________"<<endl<<
      "|Passenger Information :                                                  "<<endl<<
      "|Full Name :"<<lastname<<" "<<firstname<<"                                     "<<endl<<
      "|Address :"<<address<<"                                                   "<<endl<<
	  "|Phone Number :"<<phonenumber<<"                                          "<<endl<<
      "|_________________________________________________________________________"<<endl<<
      "|Depart :"<<currentlocation<<"                                                      "<<endl<<
      "|Arrive :"<<destination<<"                                                       "<<endl<<
      "|*BAGGAGE allowed 40 Kilograms                                                "<<endl<<
      "|*contact Airline to Confirm baggage allowance                            "<<endl<<
      "|_________________________________________________________________________"<<endl;

t=t+1;
r=r+1;

 }
};
