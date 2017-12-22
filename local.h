#include <iostream>
using namespace std;
class local: public booking
{
protected:
 int businessclass;
 int economyclass;
 int ch;
 int k;
 int p;
 int option;
 timings t1;
public:
 void getdata()
 {
  k=0;
  p=0;
  cout<<"In which AIRLINE you want to travel"<<endl<<endl;
  cout<<"1)PIA"<<endl;
  cout<<"2)AIR BLUE"<<endl;
  cout<<"3)ARAB EMIRATES"<<endl;
  cout<<"4)QATAR AIRWAYS"<<endl;
  cout<<"enter your choice";
  cin>>option;
  system ("cls");
  switch(option)
  {
  case 1:
   if (option==1)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO PIA"<<endl;
   break;
  case 2:
   if(option==2)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO AIRBLUE"<<endl;
   break;
  case 3:
   if(option==3)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO ARAB EMIRATES"<<endl;
   break;
  case 4:
   if(option==4)
    cout<<setw(40)<<"\n\n\n                                WELCOME TO QATAR AIRWAYS"<<endl;
   break;
  }
  cout<<setw(40)<<"\nTHESE ARE THE LOCAL PLACES AVAILABLE\n\n\n"<<endl;
  cin.ignore();
  for(int i=0;i<5;i++)
  {
   cout<<localdestination[i]<<endl;
  }
  booking::getdata();
  for(int j=0;j<5;j++)
  {
   if(strcmp(localdestination[j],currentlocation)==0)
   {
    k++;
   }
  
  }
  for( int i=0;i<5;i++)
  {
   if(strcmp(localdestination[i],currentlocation)==0)
  
   {
    p++;
   }
  
  }
  if(k==1&&p==1)
  
  {
   cout<<" FLIGHT AVAILABLE ON THIS ROUTE"<<endl;
   businessclass=30;
   economyclass=40;
   cout<<"In which class you want to travel?"<<endl;
   cout<<"Make your choice"<<endl<<endl;   
   cout<<"\n\n\n\n\n\n";
   cout<<setw(60)<<"*************************************"<<endl;
   cout<<setw(60)<<"*     Press 1 for Business Class    *"<<endl;
   cout<<setw(60)<<"*     Press 2 for Economy Class     *"<<endl;
   cout<<setw(60)<<"*************************************"<<endl<<endl<<endl<<endl;
   cout<<"Enter your choice";
   cin>>ch;
   cout<<endl;
   switch(ch)
   {
   case 1:
    businessclass--;
    if( businessclass<=0)
     cout<<"SORRY NO SEAT AVAILABLE"<<endl; 
    else
     cout<<"SEAT AVAILABLE"<<endl;
    break;
   case 2:
    economyclass--;
    if(  economyclass<=0)
     cout<<"SORRY NO SEAT AVAILABLE"<<endl;
    else
     cout<<"SEAT AVAILABLE"<<endl;
    break;
   }
   t1.getdata();
   system("CLS");
   booking::show();
   if(ch==1)
   
   {
   
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|BUISNESS CLASS                                                           "<<endl;

    ofstream outfile;
    outfile.open("D:\\D_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|BUISNESS CLASS                                                           "<<endl;

   }
   
   if(ch==2)
   
   {
    
    cout<<"|                                                                         "<<endl;
    cout<<"|Ticket Information:                                                      "<<endl;
    cout<<"|ECONOMY CLASS                                                            "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|                                                                         "<<endl<<
             "|Ticket Information:                                                      "<<endl<<
             "|ECONOMY CLASS                                                           "<<endl;
   }
    
       cout<<"|Status: confirmed                                                        "<<endl;

    ofstream outfile;
    outfile.open("E:\\E_ticket.txt",ios::app);
    outfile<<"|Status: confirmed                                                        "<<endl;
    t1.show();
  }
  else
  {
     cout<<"__________________________________________________________________________"<<endl;
     cout<<"|     SORRY NO FLIGHT AVAILABLE ON THIS ROUTE RIGHT NOW                   "<<endl;
     cout<<"__________________________________________________________________________"<<endl;
  }
}
 };